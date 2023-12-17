/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
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

void	print_address(unsigned long long addr)
{
	char	stack[16];
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		stack[i] = base[addr % 16];
		i++;
		addr /= 16;
	}
	i = 15;
	while (i >= 0)
	{
		ft_putchar(stack[i]);
		i--;
	}
	write(1, ": ", 2);
}

void	print_hexa(unsigned char *p, int size)
{
	char	*base;
	int		i;

	i = 0;
	base = "0123456789abcdef";
	while (i < size)
	{
		ft_putchar(base[p[i] / 16]);
		ft_putchar(base[p[i] % 16]);
		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
	}
	while (i < 16)
	{
		i++;
		write(1, "  ", 2);
		if (i % 2 == 1)
			ft_putchar(' ');
	}
	if (size % 2 == 1)
		ft_putchar(' ');
}

void	print_text(unsigned char *p, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (p[j] >= 32 && p[j] <= 126) 
			ft_putchar(p[j]);
		else
			ft_putchar('.');
		j++;
	}
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*p;
	unsigned int	offset;

	p = (unsigned char *)addr;
	offset = 0;
	while (size > 0)
	{
		print_address((unsigned long long)&p[offset]);
		if (size >= 16)
		{
			print_hexa(&p[offset], 16);
			print_text(&p[offset], 16);
			offset += 16;
			size -= 16;
		}
		else
		{
			print_hexa(&p[offset], size);
			print_text(&p[offset], size);
			size = 0;
		}
	}
	return (addr);
}
