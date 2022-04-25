/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validador.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 10:47:50 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/27 19:10:01 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_col_up(int board[4][4], int flag, int col)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	j = 1;
	tmp = board[0][col];
	while (i <= 3)
	{
		if (board[i][col] > tmp)
		{
			tmp = board[i][col];
			j++;
		}
		i++;
	}
	if (j == flag)
		return (0);
	return (1);
}

int	check_col_down(int board[4][4], int flag, int col)
{
	int	i;
	int	j;
	int	tmp;

	i = 2;
	j = 1;
	tmp = board[3][col];
	while (i >= 0)
	{
		if (board[i][col] > tmp)
		{
			tmp = board[i][col];
			j++;
		}
		i--;
	}
	if (j == flag)
		return (0);
	return (1);
}

int	check_row_left(int board[4][4], int flag, int row)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	j = 1;
	tmp = board[row][0];
	while (i <= 3)
	{
		if (board[row][i] > tmp)
		{
			tmp = board[row][i];
			j++;
		}
		i++;
	}
	if (j == flag)
		return (0);
	return (1);
}

int	check_row_right(int board[4][4], int flag, int row)
{
	int	i;
	int	j;
	int	tmp;

	i = 2;
	j = 1;
	tmp = board[row][3];
	while (i >= 0)
	{
		if (board[row][i] > tmp)
		{
			tmp = board[row][i];
			j++;
		}
		i--;
	}
	if (j == flag)
		return (0);
	return (1);
}

int	check_flags(int board[4][4], int *flags)
{
	int	i;

	i = 0;
	while (flags[i])
	{
		if (i >= 0 && i <= 3)
			if (check_col_up(board, flags[i], i))
				return (0);
		if (i >= 4 && i <= 7)
			if (check_col_down(board, flags[i], i - 4))
				return (0);
		if (i >= 8 && i <= 11)
			if (check_row_left(board, flags[i], i - 8))
				return (0);
		if (i >= 12 && i <= 15)
			if (check_row_right(board, flags[i], i - 12))
				return (0);
		i++;
	}
	return (1);
}
