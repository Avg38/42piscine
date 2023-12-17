/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:18:01 by avg38             #+#    #+#             */
/*   Updated: 2023/07/05 19:23:04 by avg38            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int *tab, int *max, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		tab[i] += 48; 
		write(1, &tab[i], 1);
		tab[i++] -= 48;
	}
	if (tab[0] != max [0])
		write(1, ", ", 2);
}

int	init_max(int *max, int n)
{
	int	i;
	int	nb;

	nb = 9;
	i = n - 1;
	while (0 <= i)
		max[i--] = nb--;
	return (*max);
}

void	ft_run(int *max, int *tab, int n)
{
	int	i;

	i = n - 1;
	ft_putnbr(tab, max, n);
	while (tab[0] != max[0])
	{
		while (tab[i] == max[i])
			i--;
		tab[i]++;
		while (i < n - 1)
		{
			i++;
			tab[i] = tab[i - 1] + 1;
		}
		ft_putnbr(tab, max, n);
	}
}

void	ft_print_combn(int n)
{
	int	max[10];
	int	tab[10];
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (i < n)
		tab[i++] = nb++;
	tab[i] = '\0';
	init_max(max, n);
	ft_run(max, tab, n);
}
