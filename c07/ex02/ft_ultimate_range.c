/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:00:21 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/28 17:51:54 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	index;
	int	*new;

	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	size = max - min;
	new = malloc(size * sizeof(int));
	if (!new)
	{
		*range = (NULL);
		return (-1);
	}
	*range = new;
	index = 0;
	while (index < size)
	{
		new[index] = min + index;
		index++;
	}
	return (size);
}
