/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:02:55 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/13 15:02:55 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions: 
// --------------------------------------------------------------------------------
// 
// Write a function that swaps the contents of two integers the adresses of which
// are passed as parameters.
// 
// Your function must be declared as follows:
// 
// void	ft_swap(int *a, int *b);

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int i;
	int j;

	printf("Enter an integer (i): ");
	scanf("%d", &i);
	printf("Enter an integer (j): ");
	scanf("%d", &j);
	ft_swap(&i, &j);
	printf("Swapped! Value of i: %d and value of j: %d", i, j);
	return (0);
}