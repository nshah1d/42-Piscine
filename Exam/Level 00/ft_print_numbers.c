/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 09:01:07 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/13 09:03:30 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_print_numbers
// Expected files   : ft_print_numbers.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a function that displays all digits in ascending order.
// 
// Your function must be declared as follows:
// 
// void	ft_print_numbers(void);

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return (0);
}
