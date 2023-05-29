/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 09:04:30 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/13 09:14:22 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : hello
// Expected files   : hello.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that displays "Hello World!" followed by a \n.
// 
// Example:
// 
// $>./hello
// Hello World!
// $>./hello | cat -e
// Hello World!$
// $>

#include <unistd.h>

int	main(void)
{
	char	*c;
	int		i;

	c = "Hello World!";
	i = 0;
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
