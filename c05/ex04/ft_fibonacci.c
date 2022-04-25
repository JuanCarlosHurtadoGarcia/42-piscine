/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 08:24:23 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/28 08:34:46 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
	{
		return (-1);
	}
	if (index < 2)
	{
		return (index);
	}
	result = (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	return (result);
}
