/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:13:02 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/24 08:38:15 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	total_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_sep(str[i + 1], charset) == 1
			&& check_sep(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

void	copy_word(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (check_sep(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	split_words(char **array, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (check_sep(str[i + j], charset) == 0)
				j++;
			array[word] = (char *)malloc(sizeof(char) * (j + 1));
			copy_word(array[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		words;

	words = total_words(str, charset);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	array[words] = 0;
	split_words(array, str, charset);
	return (array);
}
