/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:40:26 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 13:40:26 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : epur_str
// Expected files   : epur_str.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that takes a string, and displays this string with exactly one
// space between words, with no spaces or tabs either at the beginning or the end,
// followed by a \n.
// 
// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.
// 
// If the number of arguments is not 1, or if there are no words to display, the
// program displays \n.
// 
// Example:
// 
// $> ./epur_str "vous voyez c'est facile d'afficher la meme chose" | cat -e
// vous voyez c'est facile d'afficher la meme chose$
// $> ./epur_str " seulement          la c'est      plus dur " | cat -e
// seulement la c'est plus dur$
// $> ./epur_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
// $
// $> ./epur_str "" | cat -e
// $
// $>

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	len;
	int	i;

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
				write(1, " ", 1);
				break;
			}
			i++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}