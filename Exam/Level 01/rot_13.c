/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 12:00:55 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/13 14:19:53 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : rot_13
// Expected files   : rot_13.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that takes a string and displays it, replacing each of its
// letters by the letter 13 spaces ahead in alphabetical order.
// 
// 'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.
// 
// The output will be followed by a newline.
// 
// If the number of arguments is not 1, the program displays a newline.
// 
// Example:
// 
// $>./rot_13 "abc"
// nop
// $>./rot_13 "My horse is Amazing." | cat -e
// Zl ubefr vf Nznmvat.$
// $>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
// NxwuM mYXVWm , 23l $
// $>./rot_13 | cat -e
// $
// $>
// $>./rot_13 "" | cat -e
// $
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
	while (av[1][i] != '\0')
	{
		if (av[1][i] > 96 && av[1][i] < 123)
			av[1][i] = (((av[1][i] - 97) + 13) % 26) + 97;
		else if (av[1][i] > 64 && av[1][i] < 91)
			av[1][i] = (((av[1][i] - 65) + 13) % 26) + 65;
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}