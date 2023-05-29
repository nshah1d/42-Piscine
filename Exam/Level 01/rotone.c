/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:02:05 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/13 15:02:05 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : rotone
// Expected files   : rotone.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that takes a string and displays it, replacing each of its
// letters by the next one in alphabetical order.
// 
// 'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.
// 
// The output will be followed by a \n.
// 
// If the number of arguments is not 1, the program displays \n.
// 
// Example:
// 
// $>./rotone "abc"
// bcd
// $>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
// Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
// $>./rotone "AkjhZ zLKIJz , 23y " | cat -e
// BlkiA aMLJKa , 23z $
// $>./rotone | cat -e
// $
// $>
// $>./rotone "" | cat -e
// $
// $>

#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	unsigned int	i;
	char			c;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i] != '\0')
	{
		if ((av[1][i] > 96 && av[1][i] < 122) || (av[1][i] > 64 && av[1][i] < 90))
			c = av[1][i] + 1;
		else if (av[1][i] == 122 || av[1][i] == 90)
			c = av[1][i] - 25;
		else
			c = av[1][i];
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}