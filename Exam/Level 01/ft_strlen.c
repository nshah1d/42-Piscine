/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:18:52 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 10:29:34 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_strlen
// Expected files   : ft_strlen.c
// Allowed functions: 
// --------------------------------------------------------------------------------
// 
// Write a function that returns the length of a string.
// 
// Your function must be declared as follows:
// 
// int	ft_strlen(char *str);

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char	str[100];

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = 0;
	printf("The length of the string is %d\n", ft_strlen(str));
	return (0);
}
