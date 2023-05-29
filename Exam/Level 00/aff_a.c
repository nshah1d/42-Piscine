/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 08:03:28 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 10:33:43 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : aff_a
// Expected files   : aff_a.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that takes a string, and displays the first 'a' character it
// encounters in it, followed by a newline. If there are no 'a' characters in the
// string, the program just writes a newline. If the number of parameters is not
// 1, the program displays 'a' followed by a newline.
// 
// Example:
// 
// $> ./aff_a "abc" | cat -e
// a$
// $> ./aff_a "dubO a POIL" | cat -e
// a$
// $> ./aff_a "zz sent le poney" | cat -e
// $
// $> ./aff_a | cat -e
// a$

#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	unsigned int	i;
	
	if (ac != 2)
	{
		write(1, "a", 1);
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i] != '\0')
	{
		if (av[1][i] == 'a')
		{
			write(1, &av[1][i], 1);
			break;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
