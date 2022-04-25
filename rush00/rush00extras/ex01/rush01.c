/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 10:43:55 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/19 11:11:36 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 1;
	if (x < 1 || y < 1)
		return ;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((line > 1 && line < y) && (column > 1 && column < x))
				ft_putchar(' ');
			else if ((line == 1 && column == 1) || (line == y && column == x))
				ft_putchar('/');
			else if ((line == 1 && column == x) || (line == y && column == 1))
				ft_putchar('\\');
			else
				ft_putchar('*');
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
