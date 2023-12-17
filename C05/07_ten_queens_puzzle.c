/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avg38                                    +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:18:01 by avg38             #+#    #+#             */
/*   Updated: 2023/07/04 19:23:04 by avg38            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print(int *tab)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		tab[i] += 48;
		write(1, &tab[i], 1);
		tab[i] -= 48;
		i++;
	}
	write(1, "\n", 1);
}

int	ft_check_is_possible(int board[10], int x, int line)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (board[i] == line || (x - i == line - board[i]) 
			|| (x - i == board[i] - line))
			return (1);
		i++;
	}
	return (0);
}

void	ft_run(int board[10], int x, int *counter)
{
	int	line;

	if (x == 10)
	{
		*counter += 1;
		ft_print(board);
		return ;
	}
	line = 0;
	while (line < 10)
	{
		board[x] = line;
		if (ft_check_is_possible(board, x, line) == 0)
		{
			ft_run(board, x + 1, counter);
		}
		line++;
	}
	return ;
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	x;
	int	counter;

	x = 0;
	counter = 0;
	ft_run(board, x, &counter);
	return (counter);
}
