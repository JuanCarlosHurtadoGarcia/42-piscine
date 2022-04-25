/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:43:24 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/30 09:48:01 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_str_length(strings[index]);
		final_length += sep_length;
		index++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		indexs[2];
	char	*string;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	indexs[0] = ft_final_length(strs, size, ft_str_length(sep));
	string = (char *)malloc((indexs[0] + 1) * sizeof(char));
	d = string;
	if (!d)
		return (0);
	indexs[1] = 0;
	while (indexs[1] < size)
	{
		ft_strcpy(d, strs[indexs[1]]);
		d += ft_str_length(strs[indexs[1]]);
		if (indexs[1] < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_str_length(sep);
		}
		indexs[1]++;
	}
	*d = '\0';
	return (string);
}
