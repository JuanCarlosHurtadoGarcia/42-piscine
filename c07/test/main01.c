/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:53:56 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/28 13:55:02 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	i = 0;
	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
