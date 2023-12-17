/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:18:01 by avg38             #+#    #+#             */
/*   Updated: 2023/07/05 19:23:04 by avg38            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = 0;
	nb2 = 1;
	while (nb1 <= 98)
	{
		while (nb2 <= 99)
		{
			ft_putchar(nb1 / 10 + 48);
			ft_putchar(nb1 % 10 + 48);
			ft_putchar(' ');
			ft_putchar(nb2 / 10 + 48);
			ft_putchar(nb2 % 10 + 48);
			if (nb1 != 98)
				write(1, ", ", 2);
			nb2 ++;
		}
		nb1++;
		nb2 = nb1 + 1;
	}
}
