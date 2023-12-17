/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:18:01 by avg38             #+#    #+#             */
/*   Updated: 2023/07/05 19:23:04 by avg38            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ldest;
	unsigned int	lsrc;
	unsigned int	tl;
	unsigned int	i;
	unsigned int	j;

	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	tl = ldest + lsrc;
	if (size == 0)
		return (lsrc);
	if (ldest >= size)
		return (size + lsrc);
	size -= ldest;
	i = ldest;
	j = 0;
	while (src[j] && size > 1)
	{
		dest[i] = src[j];
		i++;
		j++;
		size--;
	}
	dest[i] = '\0';
	return (tl);
}
