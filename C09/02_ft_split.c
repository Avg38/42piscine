/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:18:01 by avg38             #+#    #+#             */
/*   Updated: 2023/07/05 19:23:04 by avg38            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char letter, char *sep)
{
	int	i;

	i = -1;
	while (sep[++i])
		if (letter == sep[i])
			return (1);
	return (0);
}

void	count_word(char *str, char *sep, int *count)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (is_sep(str[i], sep) == 0 
			&& ((i <= 0) || is_sep(str[i - 1], sep) == 1))
			*count += 1;
	}
}

char	*word_dup(char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**put_word(char **split, char *str, char *sep, int count)
{
	int	i;
	int	j;
	int	trigger;
	int	start;

	start = -1;
	j = 0;
	i = -1;
	while (str[++i])
	{
		trigger = 0;
		if (is_sep(str[i], sep) == 1)
			trigger = 1;
		if (trigger == 0 && start < 0)
			start = i;
		if (trigger == 1 && start >= 0)
		{
			split[j++] = word_dup(str, start, i);
			count--;
			start = -1;
		}
	}
	if (count > 0)
		split[j] = word_dup(str, start, i);
	return (split);
}

char	**ft_split(char *str, char *charset)
{
	int		count;
	char	**split;

	count = 0;
	count_word(str, charset, &count);
	split = (char **)malloc((count + 1) * sizeof(char *));
	if (!str || !(split))
		return (NULL);
	split = put_word(split, str, charset, count);
	count = 0;
	while (split[count])
		count++;
	split[count] = NULL;
	return (split);
}