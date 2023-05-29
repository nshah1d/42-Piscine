/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 09:50:11 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/13 09:53:44 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : maff_revalpha
// Expected files   : maff_revalpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that displays the alphabet in reverse, with even letters in
// uppercase, and odd letters in lowercase, followed by a newline.
// 
// Example:
// 
// $> ./maff_revalpha | cat -e
// zYxWvUtSrQpOnMlKjIhGfEdCbA$

#include <unistd.h>

int	main(void)
{
	char	c;
	int		i;

	c = 'z';
	i = 1;
	while (i < 27)
	{
		if (i % 2 == 0)
			c -= 32;
		write(1, &c, 1);
		if (c > 64 && c < 91)
			c += 32;
		c -= 1;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
