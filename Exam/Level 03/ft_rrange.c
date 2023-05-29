/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:33:29 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 15:33:29 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_rrange
// Expected files   : ft_rrange.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------
// 
// Write the following function:
// 
// int     *ft_rrange(int start, int end);
// 
// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at end and end at start (Including start and end !), then
// return a pointer to the first value of the array.
// 
// Examples:
// 
// - With (1, 3) you will return an array containing 3, 2 and 1
// - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing -3, -2, -1 and 0.

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	*ft_rrange(int start, int end)
{
	int	size;
	int	*tab;
	int	i;
	int	d;

	size = start - end;
	if (size < 0)
		size *= -1;
	size += 2;
	tab = (int *)malloc(sizeof(int) * size);
	if (start >= end)
		d = 1;
	else if (start < end)
		d = -1;
	i = 0;
	while (i < size - 1)
	{
		tab[i] = end;
		end += d;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

int main(void) 
{
	int numb_range;
	int i;
	int start;
	int end;
	int *numbers;

	printf("Start: ");
	scanf("%u", &start);
	printf("End: ");
	scanf("%u", &end);
	if (end > start)
		numb_range = end - start + 1;
	else
		numb_range = start - end + 1;
	numbers = ft_rrange(start, end);
	i = 0;
	while (i < numb_range)
	{
		printf("%d\t", numbers[i]);
		i++;
	}
	return (0);
}