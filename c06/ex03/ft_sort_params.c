/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:19:05 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/26 09:01:28 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		put_char(str[i]);
		i++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] > str2[i])
		{
			return (1);
		}
		if (str1[i] < str2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

void	swap(char **arg1, char **arg2)
{
	char	*temp;

	temp = *arg1;
	*arg1 = *arg2;
	*arg2 = temp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc - 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) == 1)
			{
				swap(&argv[i], &argv[i + 1]);
			}
			i++;
		}
		j++;
	}
	j = 1;
	while (j < argc)
	{
		put_str(argv[j]);
		put_char('\n');
		j++;
	}
	return (0);
}
