/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 09:44:45 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/13 09:49:10 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : aff_last_param
// Expected files   : aff_last_param.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that takes strings as arguments, and displays its last
// argument followed by a newline.
// 
// If the number of arguments is less than 1, the program displays a newline.
// 
// Examples:
// 
// $> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
// chats$
// $> ./aff_last_param "j'aime le savon" | cat -e
// j'aime le savon$
// $> ./aff_last_param
// $

#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int i;

	if (ac == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[ac - 1][i] != '\0')
	{
		write(1, &av[ac - 1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
