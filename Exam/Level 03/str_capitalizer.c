/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:10:19 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 19:10:19 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : str_capitalizer
// Expected files   : str_capitalizer.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that takes one or several strings and, for each argument,
// capitalizes the first character of each word (If it's a letter, obviously),
// puts the rest in lowercase, and displays the result on the standard output,
// followed by a \n.
// 
// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string. If a word only has one letter, it must be
// capitalized.
// 
// If there are no arguments, the progam must display \n.
// 
// Example:
// 
// $> ./str_capitalizer | cat -e
// $
// $> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
// A First Little Test$
// $> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
// __second Test A Little Bit   Moar Complex$
//    But... This Is Not That Complex$
//      Okay, This Is The Last 1239809147801 But Not    The Least    T$
// $>

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 1)
	{
		write(1, "\n", 1);
		return (0);
	}

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (av[i][j] > 64 && av[i][j] < 91)
				av[i][j] += 32;
			if (av[i][j - 1] == 32 || av[i][j - 1] == 9 || av[i][j + 1] == '\0')
			{
				if(av[i][j] > 96 && av[i][j] < 123)
					av[i][j] -= 32;
			}
			if (j == 0 && av[i][j] > 96 && av[i][j] < 123)
				av[i][j] -= 32;
			write(1, &av[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}