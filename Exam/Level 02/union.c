/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:06:09 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/13 18:06:09 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : union
// Expected files   : union.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that takes two strings and displays, without doubles, the
// characters that appear in either one of the strings.
// 
// The display will be in the order characters appear in the command line, and
// will be followed by a \n.
// 
// If the number of arguments is not 2, the program displays \n.
// 
// Example:
// 
// $>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// zpadintoqefwjy$
// $>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6vewg4thras$
// $>./union "rien" "cette phrase ne cache rien" | cat -e
// rienct phas$
// $>./union | cat -e
// $
// $>
// $>./union "rien" | cat -e
// $
// $>

#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int i;
	int j;
	int k;
	int duplicate;

	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i] != '\0')
		i++;
	j = 0;
	while (av[2][j] != '\0')
	{
		av[1][i] = av[2][j];
		i++;
		j++;
	}
	av[1][i] = '\0';
	i = 0;
	while (av[1][i] != '\0')
	{
		duplicate = 0;
		k = i - 1;
		while (k >= 0)
		{
			if (av[1][i] == av[1][k])
			{
				duplicate = 1;
				break;
			}
			k--;
		}
		if (!duplicate)
			write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}