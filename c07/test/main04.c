/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:56:42 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/29 10:57:22 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s", ft_convert_base(av[1], av[2], av[3]));
}
