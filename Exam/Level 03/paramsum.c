/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:08:12 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 17:08:12 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : paramsum
// Expected files   : paramsum.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that displays the number of arguments passed to it, followed by
// a newline.
// 
// If there are no arguments, just display a 0 followed by a newline.
// 
// Example:
// 
// $>./paramsum 1 2 3 5 7 24
// 6
// $>./paramsum 6 12 24 | cat -e
// 3$
// $>./paramsum | cat -e
// 0$
// $>

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int num)
{
	if (num > 9)
	{
		ft_print_number(num / 10);
		ft_print_number(num % 10);
	}
	else
	{
		ft_putchar(num + '0');
	}
}

int	main(int ac, char **av)
{
	int	num_args;

	(void)av;
	num_args = ac - 1;
	ft_print_number(num_args);
	ft_putchar('\n');
	return (0);
}