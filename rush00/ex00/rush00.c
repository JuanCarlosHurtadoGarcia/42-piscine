/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 09:03:54 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/19 10:30:24 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 1;
	column = 1;
	if (x < 1 || y < 1)
		return ;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((column > 1 && column < x) && (line > 1 && line < y))
				ft_putchar(' ');
			else if ((column > 1 && column < x) && (line == 1 || line == y))
				ft_putchar('-');
			else if ((line > 1 && line < y) && (column == 1 || column == x))
				ft_putchar('|');
			else
				ft_putchar('o');
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
