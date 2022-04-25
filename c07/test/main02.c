/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:54:52 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/28 17:55:09 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	i = 0;
	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
