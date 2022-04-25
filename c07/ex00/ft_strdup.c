/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:56:30 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/28 17:35:47 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
