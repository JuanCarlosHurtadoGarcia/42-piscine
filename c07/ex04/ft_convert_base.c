/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:58:43 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/29 11:13:35 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr_base_v2(int nbr, char *base, char *nbrf);
int		lenght_nbr(int nbr, char *base, int lenght);

int	checkerror(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		j = i + 1;
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	nb_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	count = 1;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	negative;
	int	nb;
	int	nb2;
	int	begin_len;

	nb = 0;
	i = 0;
	begin_len = checkerror(base);
	if (begin_len >= 2)
	{
		negative = whitespaces(str, &i);
		nb2 = nb_base(str[i], base);
		while (nb2 != -1)
		{
			nb = (nb * begin_len) + nb2;
			i++;
			nb2 = nb_base(str[i], base);
		}
		return (nb *= negative);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*finalnbr;
	int		mednbr;
	int		lenght_nbrf;

	if (checkerror(base_to) == 0 || checkerror(base_from) == 0)
		return (0);
	mednbr = ft_atoi_base(nbr, base_from);
	lenght_nbrf = lenght_nbr(mednbr, base_to, 0);
	finalnbr = malloc(sizeof(char) * (lenght_nbrf + 1));
	if (!finalnbr)
		return (0);
	ft_putnbr_base_v2(mednbr, base_to, finalnbr);
	finalnbr[lenght_nbrf] = '\0';
	return (finalnbr);
}
