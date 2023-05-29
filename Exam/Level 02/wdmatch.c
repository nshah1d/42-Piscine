/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 09:38:13 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/14 09:38:13 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : wdmatch
// Expected files   : wdmatch.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that takes two strings and checks whether it's possible to
// write the first string with characters from the second string, while respecting
// the order in which these characters appear in the second string.
// 
// If it's possible, the program displays the string, followed by a \n, otherwise
// it simply displays a \n.
// 
// If the number of arguments is not 2, the program displays a \n.
// 
// Examples:
// 
// $>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
// faya$
// $>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
// $
// $>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
// quarante deux$
// $>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
// $
// $>./wdmatch | cat -e
// $

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned int	get_length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	print_str(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	count;

	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	j = 0;
	k = 0;
	count = 0;
	while (av[1][i] != '\0')
	{
		while(av[2][j] != '\0')
		{
			if (av[1][i] == av[2][j])
			{
				count++;
				k = j;
				break;
			}
			j++;
		}
		if (k > 0)
			j = k + 1;
		else
			j = 0;
		i++;
	}
	if (count == get_length(av[1]))
		print_str(av[1]);
	write(1, "\n", 1);
	return (0);
}