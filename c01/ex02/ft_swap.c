/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:27:35 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/20 21:30:32 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	entero_a;
	int	entero_b;

	entero_a = *a;
	entero_b = *b;
	*a = entero_b;
	*b = entero_a;
}
