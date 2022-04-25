/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 09:37:44 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/26 09:48:43 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 0)
	{
		factorial = nb * ft_recursive_factorial(nb - 1);
	}
	return (factorial);
}
