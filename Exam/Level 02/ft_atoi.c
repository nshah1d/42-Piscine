/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:26:39 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 10:27:23 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------
// 
// Write a function that converts the string argument str to an integer (type int)
// and returns it.
// 
// It works much like the standard atoi(const char *str) function, see the man.
// 
// Your function must be declared as follows:
// 
// int	ft_atoi(const char *str);

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	
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
		result = result * 10 + str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}

int	main(void)
{
	char	str[100];

	printf("Enter a string to convert: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = 0;
	printf("Converted: %d\n", ft_atoi(str));
}
