/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:00:39 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/28 13:53:03 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*new;
	int	range;
	int	i;
	int	j;

	if (min >= max)
	{
		return (NULL);
	}
	range = max - min;
	new = malloc(sizeof(int) * range);
	if (!new)
	{
		return (NULL);
	}
	i = min;
	j = 0;
	while (i < max)
	{
		new[j] = i;
		i++;
		j++;
	}
	return (new);
}
