/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:47:44 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 16:47:44 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_range
// Expected files   : ft_range.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------
// 
// Write the following function:
// 
// int     *ft_range(int start, int end);
// 
// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at start and end at end (Including start and end !), then
// return a pointer to the first value of the array.
// 
// Examples:
// 
// - With (1, 3) you will return an array containing 1, 2 and 3.
// - With (-1, 2) you will return an array containing -1, 0, 1 and 2.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing 0, -1, -2 and -3.

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	size;
	int	*tab;
	int	i;
	int d;

	size = end - start;
	if (size < 0)
		size *= -1;
	size += 2;
	tab = (int *)malloc(sizeof(int) * (size));
	if (!(tab))
		return (NULL);
	i = 0;
	if (start >= end)
		d = -1;
	else if (start < end)
		d = 1;
	while (i < size - 1)
	{
		tab[i] = start;
		start += d;
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
	if (start > end)
		numb_range = start - end;
	else
		numb_range = end - start;
	numbers = ft_range(start, end);
	i = 0;
	while (i <= numb_range)
		printf("%d\t", numbers[i++]);
	return (0);
}