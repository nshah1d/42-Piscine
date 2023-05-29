/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:55:38 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/13 14:55:38 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : rev_print
// Expected files   : rev_print.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that takes a string, and displays the string in reverse
// followed by a newline.
// 
// If the number of parameters is not 1, the program displays a newline.
// 
// Examples:
// 
// $> ./rev_print "zaz" | cat -e
// zaz$
// $> ./rev_print "dub0 a POIL" | cat -e
// LIOP a 0bud$
// $> ./rev_print | cat -e
// $

#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i] != '\0')
		i++;
	while (i >= 0)
	{
		write(1, &av[1][i], 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}