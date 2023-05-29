/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 09:19:47 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/13 09:28:41 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : maff_alpha
// Expected files   : maff_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that displays the alphabet, with even letters in uppercase, and
// odd letters in lowercase, followed by a newline.
// 
// Example:
// 
// $> ./maff_alpha | cat -e
// aBcDeFgHiJkLmNoPqRsTuVwXyZ$

#include <unistd.h>

int	main(void)
{
	char	c;
	int		i;

	c = 'a';
	i = 1;
	while (i <= 26)
	{
		if (i % 2 == 0)
			c -= 32;
		write(1, &c, 1);
		if (c > 64 && c < 91)
			c += 32;
		i++;
		c += 1;
	}
	write(1, "\n", 1);
}
