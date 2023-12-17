/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:18:01 by avg38             #+#    #+#             */
/*   Updated: 2023/07/05 19:23:04 by avg38            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int nb1, int nb2, int nb3)
{
	write(1, &nb1, 1);
	write(1, &nb2, 1);
	write(1, &nb3, 1);
	if (nb1 != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	nb1;
	int	nb2;
	int	nb3;

	nb1 = 48;
	nb2 = 48 + 1;
	nb3 = 48 + 2;
	while (nb1 <= '7')
	{
		while (nb2 <= '8')
		{
			while (nb3 <= '9')
			{
				ft_print_numbers(nb1, nb2, nb3);
				nb3++;
			}
			nb2++;
			nb3 = nb2 + 1;
		}
		nb1++;
		nb2 = nb1 + 1;
		nb3 = nb2 + 1;
	}
}
