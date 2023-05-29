/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:25:34 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 19:25:34 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : print_hex
// Expected files   : print_hex.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that takes a positive (or zero) number expressed in base 10,
// and displays it in base 16 (lowercase letters) followed by a newline.
// 
// If the number of parameters is not 1, the program displays a newline.
// 
// Examples:
// 
// $> ./print_hex "10" | cat -e
// a$
// $> ./print_hex "255" | cat -e
// ff$
// $> ./print_hex "5156454" | cat -e
// 4eae66$
// $> ./print_hex | cat -e
// $

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int num;

	i = 0;
	num = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] > 47 && str[i] < 58)
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num);
}

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_base(int num)
{
	char hexa[] = "0123456789abcdef";
	if (num > 15)
	{
		ft_print_base(num / 16);
		ft_print_base(num % 16);
	}
	else 
		ft_printchar(hexa[num]);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_print_base(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}