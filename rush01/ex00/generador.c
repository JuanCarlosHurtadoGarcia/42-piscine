/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generador.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 10:52:46 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/27 23:15:48 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	output(int board[4][4]);

int		check_flags(int board[4][4], int *flags);

int	fill_board(int board[4][4], int indexs[6], int comb[24][4], int *flags)
{
	int	col;

	indexs[4] = 0;
	while (indexs[4] <= 3)
	{
		col = 0;
		while (col <= 3)
		{
			board[indexs[4]][col] = comb[indexs[indexs[4]]][col];
			col++;
		}
		indexs[4]++;
	}
	if (check_flags(board, flags))
	{
		output(board);
		return (1);
	}
	return (0);
}

int	test(int board[4][4], int *flags, int comb[24][4], int indexs[6])
{
	indexs[5] = fill_board(board, indexs, comb, flags);
	indexs[3]++;
	if (indexs[5])
		return (indexs[5]);
	else
		return (0);
}

int	generator(int board[4][4], int *flags, int comb[24][4])
{
	int	indexs[6];

	indexs[0] = 0;
	while (indexs[0] <= 23)
	{
		indexs[1] = 0;
		while (indexs[1] <= 23)
		{
			indexs[2] = 0;
			while (indexs[2] <= 23)
			{
				indexs[3] = 0;
				while (indexs[3] <= 23)
				{
					indexs[5] = test(board, flags, comb, indexs);
					if (indexs[5])
						return (1);
				}
				indexs[2]++;
			}
			indexs[1]++;
		}
		indexs[0]++;
	}
	return (indexs[5]);
}
