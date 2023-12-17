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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_nlen(long long n, int lb)
{
	long long	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= lb;
		i++;
	}
	return (i);
}

int	check_base(char *b, int lb)
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
			if ((b[i] == b[j] && i != j) 
				|| b[j] == '+' || b[j] == '-'
				|| !(b[i] >= 32 && b[i] <= 126))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_pow(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_pow(nb, power - 1));
}

int	char_in_base(char c, char *b)
{
	int	i;

	i = -1;
	while (b[++i])
		if (b[i] == c)
			return (1);
	return (0);
}
