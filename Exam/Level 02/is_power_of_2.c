/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 15:36:45 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/14 15:36:45 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : is_power_of_2
// Expected files   : is_power_of_2.c
// Allowed functions: None
// --------------------------------------------------------------------------------
// 
// Write a function that determines if a given number is a power of 2.
// 
// This function returns 1 if the given number is a power of 2, otherwise it returns 0.
// 
// Your function must be declared as follows:
// 
// int	    is_power_of_2(unsigned int n);

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (i <= n)
	{
		if (i == n)
			return (1);
		i *= 2;
	}
	return (0);
}

int	main(void)
{
	unsigned int	i;

	printf("Enter an integer: ");
	scanf("%u", &i);
	printf("Power of 2: %s", is_power_of_2(i) ? "True":"False");
	return (0);
}