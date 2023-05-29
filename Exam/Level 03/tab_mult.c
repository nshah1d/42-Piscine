/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:45:33 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 17:45:33 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : tab_mult
// Expected files   : tab_mult.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that displays a number's multiplication table.
// 
// The parameter will always be a strictly positive number that fits in an int,
// and said number times 9 will also fit in an int.
// 
// If there are no parameters, the program displays \n.
// 
// Examples:
// 
// $>./tab_mult 9
// 1 x 9 = 9
// 2 x 9 = 18
// 3 x 9 = 27
// 4 x 9 = 36
// 5 x 9 = 45
// 6 x 9 = 54
// 7 x 9 = 63
// 8 x 9 = 72
// 9 x 9 = 81
// $>./tab_mult 19
// 1 x 19 = 19
// 2 x 19 = 38
// 3 x 19 = 57
// 4 x 19 = 76
// 5 x 19 = 95
// 6 x 19 = 114
// 7 x 19 = 133
// 8 x 19 = 152
// 9 x 19 = 171
// $>
// $>./tab_mult | cat -e
// $
// $>

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	num;
	int	i;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while(str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum(int num)
{
	if (num > 9)
	{
		ft_putnum(num / 10);
		ft_putnum(num % 10);
	}
	else
		ft_putchar(num + '0');
}

int	main(int ac, char **av)
{
	int	num;
	int	i;
	int	mult;

	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	num = ft_atoi(av[1]);
	i = 1;
	while (i <= 9)
	{
		ft_putnum(i);
		write(1, " x ", 3);
		ft_putnum(num);
		write(1, " = ", 3);
		mult = i * num;
		ft_putnum(mult);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}