/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:40:07 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 10:31:00 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_putstr
// Expected files   : ft_putstr.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a function that displays a string on the standard output.
// 
// The pointer passed to the function contains the address of the string's first
// character.
// 
// Your function must be declared as follows:
// 
// void	ft_putstr(char *str);

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[100];

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = 0;
	printf("You entered: ");
	ft_putstr(str);
	return (0);
}
