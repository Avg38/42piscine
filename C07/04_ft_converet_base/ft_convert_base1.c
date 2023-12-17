/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:18:01 by avg38             #+#    #+#             */
/*   Updated: 2023/07/05 19:23:04 by avg38            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_nlen(long long n, int lb);
int	check_base(char *b, int lb);
int	ft_pow(int nb, int power);
int	char_in_base(char c, char *b);

int	change_base(char *str, char *b, int i, int j)
{
	int	index;
	int	power;
	int	nb;
	int	lb;

	lb = 0;
	while (b[lb])
		lb++;
	power = 0;
	nb = 0;
	while (j >= i)
	{
		index = 0;
		while (str[j] != b[index])
			index++;
		nb += index * ft_pow(lb, power);
		power++;
		j--;
	}
	return (nb);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	sign;

	i = 0;
	while (base[i])
		i++;
	i = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -sign;
	j = 0;
	while (char_in_base(str[i + j], base) == 1)
		j++;
	return (change_base(str, base, i, i + j - 1) * sign);
}

char	*ft_putnbr_base(int nbr, char *b, int lb, char *res)
{
	int			i;
	long long	n;

	n = nbr;
	i = 0;
	if (check_base(b, lb))
		return (NULL);
	if (nbr < 0)
	{
		n = -n;
		res[0] = '-';
		i++;
	}
	i += ft_nlen(n, lb) - 1;
	while (i >= 0 && res[i] != '-')
	{
		res[i] = b[n % lb];
		n = n / lb;
		i--;
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*res;
	long		nb;

	res = NULL;
	if (check_base(base_from, ft_strlen(base_from)))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	res = (char *)malloc(sizeof(char) * 33);
	res = ft_putnbr_base(nb, base_to, ft_strlen(base_to), res);
	return (res);
}
