/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 07:05:46 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 08:27:44 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : camel_to_snake
// Expected files   : camel_to_snake.c
// Allowed functions: malloc, realloc, write
// --------------------------------------------------------------------------------
// 
// Write a program that takes a single string in lowerCamelCase format
// and converts it into a string in snake_case format.
// 
// A lowerCamelCase string is a string where each word begins with a capital letter
// except for the first one.
// 
// A snake_case string is a string where each word is in lower case, separated by
// an underscore "_".
// 
// Examples:
// $>./camel_to_snake "hereIsACamelCaseWord"
// here_is_a_camel_case_word
// $>./camel_to_snake "helloWorld" | cat -e
// hello_world$
// $>./camel_to_snake | cat -e
// $

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	unsigned int	i;
	unsigned int	c;
	unsigned int	l;
	unsigned int	j;
	char			*str;

	i = 0;
	c = 0;
	l = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i] != '\0')
	{
		if (av[1][i] > 64 && av[1][i] < 91)
			c++;
		i++;
	}
	l = i + c;
	str = (char *)malloc(sizeof(char) * l);
	i = 0;
	j = 0;
	while (av[1][i] != '\0')
	{
		if (av[1][i] > 64 && av[1][i] < 91)
		{
			av[1][i] += 32;
			str[j] = '_';
			j++;
		}
		str[j] = av[1][i];
		i++;
		j++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
