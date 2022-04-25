/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:59:21 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/31 09:34:02 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*store;

	size = 0;
	i = 0;
	while (src[size])
		size++;
	store = malloc(sizeof(char) * (size + 1));
	if (!(store))
	{
		return (NULL);
	}
	while (src[i])
	{
		store[i] = src[i];
		i++;
	}
	store[size] = '\0';
	return (store);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;
	int			len;

	tab = malloc((ac + 1) * sizeof(t_stock_str));
	i = 0;
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		tab[i].size = len;
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}
