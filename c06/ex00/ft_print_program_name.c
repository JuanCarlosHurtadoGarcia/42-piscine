/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:57:49 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/26 09:01:30 by jhurtado         ###   ########.fr       */
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
	char	*name;

	i = 0;
	(void)argc;
	name = argv[0];
	while (name[i])
	{
		put_char(name[i]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
