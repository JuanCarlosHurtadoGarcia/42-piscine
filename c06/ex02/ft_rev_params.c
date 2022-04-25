/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:07:56 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/23 20:10:20 by jhurtado         ###   ########.fr       */
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

	j = argc;
	while (j > 1)
	{
		parameter = argv[j - 1];
		i = 0;
		while (parameter[i])
		{
			put_char(parameter[i]);
			i++;
		}
		put_char('\n');
		j--;
	}
	return (0);
}
