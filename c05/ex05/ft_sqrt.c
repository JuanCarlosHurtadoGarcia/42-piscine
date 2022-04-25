/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 08:44:40 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/30 18:27:14 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_calculate(int number, int index)
{
	while (index <= 50000)
	{
		if (index * index == number)
		{
			return (index);
		}
		index++;
	}
	return (0);
}

int	ft_sqrt(int nb)
{
	long	number;
	int		mid;

	number = nb;
	if (number <= 0)
		return (0);
	if (number == 1)
	{
		return (1);
	}
	mid = INT_MAX / 2;
	if (number < mid)
		return (ft_calculate(number, 2));
	else
		return (ft_calculate(number, (32500)));
}
