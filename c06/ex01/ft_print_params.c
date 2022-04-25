/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:02:14 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/23 20:06:20 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*parameter;

	j = 1;
	while (j < argc)
	{
		parameter = argv[j];
		i = 0;
		while (parameter[i])
		{
			put_char(parameter[i]);
			i++;
		}
		put_char('\n');
		j++;
	}
	return (0);
}
