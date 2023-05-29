/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:48:36 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/13 11:53:55 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : search_and_replace
// Expected files   : search_and_replace.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------
// 
// Write a program called search_and_replace that takes 3 arguments, the first 
// arguments is a string in which to replace a letter (2nd argument) by
// another one (3rd argument).
// 
// If the number of arguments is not 3, just display a newline.
// 
// If the second argument is not contained in the first one (the string)
// then the program simply rewrites the string followed by a newline.
// 
// Examples:
// $>./search_and_replace "Papache est un sabre" "a" "o"
// Popoche est un sobre
// $>./search_and_replace "zaz" "art" "zul" | cat -e
// $
// $>./search_and_replace "zaz" "r" "u" | cat -e
// zaz$
// $>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
// $
// $>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
// ZaZ eT David aiME le METal.$
// $>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
// eNcOre Un ExEmPle Pas Facile a Ecrire $

#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	unsigned int	i;

	if (ac != 4 || av[2][1] != '\0' || av[3][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i] != '\0')
	{
		if (av[1][i] == av[2][0])
			av[1][i] = av[3][0];
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
