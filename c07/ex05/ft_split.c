/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurtado <jhurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:35:12 by jhurtado          #+#    #+#             */
/*   Updated: 2022/03/29 10:19:22 by jhurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
		{
			return (1);
		}
		i++;
	}
	if (c == '\0')
	{
		return (1);
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!(separator(str[i], charset)) && separator(str[i + 1], charset))
		{
			words++;
		}
		i++;
	}
	return (words);
}

void	write_word(char *dest, char *str, int i, char *charset)
{
	int	j;

	j = 0;
	while (!separator(str[i], charset))
	{
		dest[j] = str[i];
		i++;
		j++;
	}
	dest[j] = '\0';
}

void	write_split(char **split, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (separator(str[i], charset))
		{
			i++;
		}
		else
		{
			j = 0;
			while (!(separator(str[i + j], charset)))
			{
				j++;
			}
			split[word] = malloc(sizeof(char) * (j + 1));
			write_word(split[word], str, i, charset);
			i = i + j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		words;

	words = count_words(str, charset);
	split = malloc(sizeof(char *) * (words + 1));
	split[words] = NULL;
	write_split(split, str, charset);
	return (split);
}
