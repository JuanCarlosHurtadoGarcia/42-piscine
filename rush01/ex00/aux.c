/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 10:42:28 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/27 22:30:39 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		generator(int board[4][4], int *flags, int comb[24][4]);

int	check_set_flags(char *arg, int *flags)
{
	int	i;
	int	j;
	int	cond1;
	int	cond2;
	int	cond3;

	i = 0;
	j = 0;
	while (arg[i])
	{
		cond1 = (arg[i + 1] == ' ' || !(arg[i + 1]));
		if ((arg[i] >= '1' && arg[i] <= '4') && cond1)
		{
			flags[j] = (arg[i] - '0');
			j++;
			i++;
		}
		cond2 = (arg[i + 1] >= '1' && arg[i + 1] <= '4');
		cond3 = (arg[i - 1] >= '1' && arg[i - 1] <= '4');
		if ((arg[i] == 32 && (cond3)) && cond2)
			i++;
		else
			return (j);
	}
	return (j);
}

void	start_board(int board[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row <= 3)
	{
		col = 0;
		while (col <= 3)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	output(int board[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row <= 3)
	{
		col = 0;
		while (col <= 3)
		{
			ft_putchar(board[row][col] + '0');
			if (col == 3)
				col++;
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
