/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:35:03 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 16:35:03 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : expand_str
// Expected files   : expand_str.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that takes a string and displays it with exactly three spaces
// between each word, with no spaces or tabs either at the beginning or the end,
// followed by a newline.
// 
// A word is a section of string delimited either by spaces/tabs, or by the
// start/end of the string.
// 
// If the number of parameters is not 1, or if there are no words, simply display
// a newline.
// 
// Examples:
// 
// $> ./expand_str "See? It's easy to print the same thing" | cat -e
// See?   It's   easy   to   print   the   same   thing$
// $> ./expand_str " this        time it      will     be    more complex  " | cat -e
// this   time   it   will   be   more   complex$
// $> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
// $
// $> ./expand_str "" | cat -e
// $
// $>

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i;
	int	len;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	len = 0;
	while (av[1][len] != '\0')
		len++;
	i = 0;
	while (av[1][i] == 32 || av[1][i] == 9)
		i++;
	len -= 1;
	while (av[1][len] == 32 || av[1][len] == 9)
		len--;
	while (i <= len)
	{
		if (av[1][i] >= 33 && av[1][i] <= 126)
			write(1, &av[1][i], 1);
		while (av[1][i] == 32 || av[1][i] == 9)
		{
			if (av[1][i + 1] > 32 && av[1][i + 1] <= 126)
			{
				write(1, "   ", 3);
				break;
			}
			i++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}