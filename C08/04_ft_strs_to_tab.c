/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:18:01 by avg38             #+#    #+#             */
/*   Updated: 2023/07/05 19:23:04 by avg38            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
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
	int		size;
	int		i;
	char	*n_str;

	i = 0;
	size = ft_strlen(src);
	n_str = (char *) malloc((size + 1) * sizeof(char));
	if (!n_str)
		return (NULL);
	while (src[i])
	{
		n_str[i] = src[i];
		i++;
	}
	n_str[i] = '\0';
	return (n_str);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab_str;

	if (ac < 1)
		ac = 0;
	tab_str = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (!tab_str)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab_str[i].size = ft_strlen(av[i]);
		tab_str[i].str = av[i];
		tab_str[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab_str[i].str = 0;
	return (tab_str);
}