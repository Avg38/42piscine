/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:18:01 by avg38             #+#    #+#             */
/*   Updated: 2023/07/05 19:23:04 by avg38            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_is_start(char c, char before, int i)
{
	if (before < '0' || (before > '9' && before < 'A') 
		|| (before > 'Z' && before < 'a') 
		|| before > 'z' || i == 0)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
	}
	else if (c >= 'A' && c <= 'Z')
		return (2);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check_is_start(str[i], str[i - 1], i) == 1)
			str[i] -= 32;
		if (check_is_start(str[i], str[i - 1], i) == 2)
			str[i] += 32;
		i++;
	}
	return (str);
}
