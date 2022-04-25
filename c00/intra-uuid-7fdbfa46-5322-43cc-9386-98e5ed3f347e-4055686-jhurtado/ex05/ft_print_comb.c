/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:17:33 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/20 13:12:11 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int i, int j, int k)
{
	if ((i == '7') && (j == '8') && (k == '9'))
	{
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(k);
	}
	else
	{
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(k);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= ('7'))
	{
		j = i + 1;
		while (j <= ('8'))
		{
			k = j + 1;
			while (k <= ('9'))
			{
				ft_print(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
