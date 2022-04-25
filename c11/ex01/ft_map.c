/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 09:33:31 by jhurtado          #+#    #+#             */
/*   Updated: 2022/04/04 13:51:23 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*result;

	i = 0;
	result = malloc(sizeof(int) * length);
	if (result == 0)
	{
		return (0);
	}
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
