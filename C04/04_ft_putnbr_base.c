/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 18:18:01 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/04 19:23:04 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	run(unsigned int nbr, char *base, unsigned int lb)
{
	if (nbr >= lb)
	{
		run(nbr / lb, base, lb);
	}
	ft_putchar(base[nbr % lb]);
}

int	verif(char *b, int lb)
{
	int	i;
	int	j;

	if (lb < 2)
		return (1);
	i = 0;
	while (b[i])
	{
		j = 0;
		while (b[j])
		{
			if ((b[i] == b[j] && i != j) || b[j] == '+' || b[j] == '-')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nb;

	if (verif(base, ft_strlen(base)) == 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	nb = nbr;
	run(nb, base, ft_strlen(base));
}
