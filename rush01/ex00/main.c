/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:08:43 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/27 23:06:48 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		generator(int board[4][4], int *flags, int comb[24][4]);
int		check_set_flags(char *arg, int *flags);
void	start_board(int board[4][4]);
void	fill_comb(int comb[24][4]);
void	output(int board[4][4]);

int	check_input_errors(int argc, char **argv, int i)
{
	if (!(argc == 2))
	{
		return (1);
	}
	if (!(i == 16))
	{
		return (1);
	}
	if (argv[1][0] == ' ' || (argv[1][31] == ' '))
	{
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)

{
	int	board[4][4];
	int	flags[16];
	int	i;
	int	comb[24][4];

	fill_comb(comb);
	i = check_set_flags(argv[1], flags);
	if ((check_input_errors(argc, argv, i) == 1))
		write(1, "Error\n", 6);
	else
	{
		start_board(board);
		i = generator(board, flags, comb);
		if (i == 0)
		{
			write(1, "Error\n", 6);
		}
	}
	return (0);
}
