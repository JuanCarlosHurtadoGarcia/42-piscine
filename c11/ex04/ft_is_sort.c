/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:13:43 by jhurtado          #+#    #+#             */
/*   Updated: 2022/04/04 13:52:10 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sort;

	i = 0;
	sort = 1;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) > 0)
			sort = 0;
		i++;
	}
	if (sort != 1)
	{
		i = 0;
		while (i < (length - 1))
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
	}
	return (1);
}
