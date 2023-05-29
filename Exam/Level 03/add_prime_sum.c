/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:03:28 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 12:06:00 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------
// 
// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.
// 
// If the number of arguments is not 1, or the argument is not a positive number,
// just display 0 followed by a newline.
// 
// Yes, the examples are right.
// 
// Examples:
// 
// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

int	ft_is_prime(int num)
{
	int	i;
	
	i = 2;
	while (i <= num / 2)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_next_prime(int num)
{
	int	i;

	i = num;
	while (!(ft_is_prime(i)))
		i++;
	return (i);
}

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_num(int num)
{
	if (num > 9)
	{
		ft_print_num(num / 10);
		ft_print_num(num % 10);
	}
	else
		ft_print_char(num + '0');
}

int	main(int ac, char **av)
{
	unsigned int	sum;
	int				num;
	int				i;

	if (ac != 2)
	{
		write(1, "0", 1);
		write(1, "\n", 1);
		return (0);
	}
	sum = 0;
	num = ft_atoi(av[1]);
	if (num < 2)
	{
		write(1, "0", 1);
		write(1, "\n", 1);
		return (0);
	}
	i = 2;
	while (i <= num)
	{
		i = ft_next_prime(i);
		if (i <= num)
			sum += i;
		i++;
	}
	ft_print_num(sum);
	write(1, "\n", 1);
	return (0);
}
