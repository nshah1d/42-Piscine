/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:03:59 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/13 14:03:59 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : first_word
// Expected files   : first_word.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that takes a string and displays its first word, followed by a
// newline.
// 
// A word is a section of string delimited by spaces/tabs or by the start/end of
// the string.
// 
// If the number of parameters is not 1, or if there are no words, simply display
// a newline.
// 
// Examples:
// 
// $> ./first_word "FOR PONY" | cat -e
// FOR$
// $> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
// this$
// $> ./first_word "   " | cat -e
// $
// $> ./first_word "a" "b" | cat -e
// $
// $> ./first_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>

#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	unsigned int	i;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i] != '\0' && (av[1][i] == 9 || av[1][i] == 32))
		i++;

	while (av[1][i] != '\0' && (av[1][i] != 9 && av[1][i] != 32))
	{
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}