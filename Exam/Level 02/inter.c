/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:14:50 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/13 17:14:50 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : inter
// Expected files   : inter.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that takes two strings and displays, without doubles, the
// characters that appear in both strings, in the order they appear in the first
// one.
// 
// The display will be followed by a \n.
// 
// If the number of arguments is not 2, the program displays \n.
// 
// Examples:
// 
// $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$
// $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6ewg4$
// $>./inter "rien" "cette phrase ne cache rien" | cat -e
// rien$
// $>./inter | cat -e
// $

#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	int j;
	int k;
	int match;
	int duplicate;

	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i] != '\0')
	{
		j = 0;
		match = 0;
		duplicate = 0;
		while (av[2][j] != '\0')
		{
			if (av[1][i] == av[2][j])
			{
				match = 1;
				break;
			}
			j++;
		}
		if (match)
		{
			k = i - 1;
			while (k >= 0)
			{
				if (av[1][k] == av[1][i])
				{
					duplicate = 1;
					break;
				}
				k--;
			}
		}
		if (match && !duplicate)
			write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}