/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 09:56:33 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/13 09:57:30 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : only_z
// Expected files   : only_z.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that displays a 'z' character on the standard output.

#include <unistd.h>

int	main(void)
{
	char c;

	c = 'z';
	write(1, &c, 1);
	return (0);
}
