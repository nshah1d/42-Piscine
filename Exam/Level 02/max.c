/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 08:57:13 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/14 08:57:13 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : max
// Expected files   : max.c
// Allowed functions: 
// --------------------------------------------------------------------------------
// 
// Write the following function:
// 
// int		max(int* tab, unsigned int len);
// 
// The first parameter is an array of int, the second is the number of elements in
// the array.
// 
// The function returns the largest number found in the array.
// 
// If the array is empty, the function returns 0.

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	num;
	
	if (!len || tab[0] == '\0')
		return (0);
	i = 0;
	num = tab[0];
	while (i < len)
	{
		if (num < tab[i])
			num = tab[i];
		i++;
	}
	return (num);
}

int	main(void)
{
	int values[5];

	printf("Enter 5 integers: ");
	for(int i = 0; i < 5; ++i)
		scanf("%d", &values[i]);
	printf("Max Value: %d\n", max(values, 5));
	return (0);
}