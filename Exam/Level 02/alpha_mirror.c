/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 07:34:30 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/14 07:34:30 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : alpha_mirror
// Expected files   : alpha_mirror.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program called alpha_mirror that takes a string and displays this string
// after replacing each alphabetical character by the opposite alphabetical
// character, followed by a newline.
// 
// 'a' becomes 'z', 'Z' becomes 'A'
// 'd' becomes 'w', 'M' becomes 'N'
// 
// and so on.
// 
// Case is not changed.
// 
// If the number of arguments is not 1, display only a newline.
// 
// Examples:
// 
// $>./alpha_mirror "abc"
// zyx
// $>./alpha_mirror "My horse is Amazing." | cat -e
// Nb slihv rh Znzarmt.$
// $>./alpha_mirror | cat -e
// $
// $>

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
	{
		if (av[1][i] > 64 && av[1][i] < 91)
			av[1][i] = 90 - av[1][i] + 65;
		else if (av[1][i] > 96 && av[1][i] < 123)
			av[1][i] = 122 - av[1][i] + 97;
		write(1, &av[1][i], 1);
		i++;	
	}
	write(1, "\n", 1);
	return (0);
}