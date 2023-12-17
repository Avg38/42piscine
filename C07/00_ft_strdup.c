/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:18:01 by avg38             #+#    #+#             */
/*   Updated: 2023/07/11 19:23:04 by avg38            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		l;
	int		i;
	char	*mystring;

	l = ft_strlen(src);
	mystring = (char *) malloc((l + 1) * sizeof(char));
	if (mystring == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		mystring[i] = src[i];
		i++;
	}
	mystring[i] = '\0';
	return (mystring);
}
