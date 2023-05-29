/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 08:22:04 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 08:33:33 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : snake_to_camel
// Expected files   : snake_to_camel.c
// Allowed functions: malloc, free, realloc, write
// --------------------------------------------------------------------------------
// 
// Write a program that takes a single string in snake_case format
// and converts it into a string in lowerCamelCase format.
// 
// A snake_case string is a string where each word is in lower case, separated by
// an underscore "_".
// 
// A lowerCamelCase string is a string where each word begins with a capital letter
// except for the first one.
// 
// Examples:
// $>./snake_to_camel "here_is_a_snake_case_word"
// hereIsASnakeCaseWord
// $>./snake_to_camel "hello_world" | cat -e
// helloWorld$
// $>./snake_to_camel | cat -e
// $

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	unsigned int	i;
	unsigned int	l;
	char			*str;
	unsigned int	j;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	l = 0;
	while (av[1][i] != '\0')
	{
		if (av[1][i] == 95)
			l--;
		i++;
		l++;
	}
	str = (char *)malloc(sizeof(char) * l);
	i = 0;
	j = 0;
	while (av[1][i] != '\0')
	{
		if (av[1][i] == 95)
		{
			av[1][i + 1] -= 32;
			i++;
		}
		str[j] = av[1][i];
		j++;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
