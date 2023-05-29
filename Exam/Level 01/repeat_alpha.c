/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:28:12 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/22 18:16:39 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.
// 
// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...
// 
// Case remains unchanged.
// 
// If the number of arguments is not 1, just display a newline.
// 
// Examples:
// 
// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	repeat(char c)
{
	int	i;

	i = 0;
	if (c > 96 && c < 123)
		i = c - 97 + 1;
	else if (c > 64 && c < 91)
		i = c - 65 + 1;
	return (i);
}

int	main(int ac, char **av)
{
	unsigned int	i;
	int				j;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i] != '\0')
	{
		j = repeat(av[1][i]);
		if (j == 0)
			write(1, &av[1][i], 1);
		while (j > 0)
		{
			write(1, &av[1][i], 1);
			j--;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
