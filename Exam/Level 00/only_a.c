/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 09:54:22 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/13 09:55:38 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : only_a
// Expected files   : only_a.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that displays a 'a' character on the standard output.

#include <unistd.h>

int	main(void)
{
	char c;

	c = 'a';
	write(1, &c, 1);
	return (0);
}
