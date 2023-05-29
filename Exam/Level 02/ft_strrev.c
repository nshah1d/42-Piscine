/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 15:11:38 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 10:23:43 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions: 
// --------------------------------------------------------------------------------
// 
// Write a function that reverses (in-place) a string.
// 
// It must return its parameter.
// 
// Your function must be declared as follows:
// 
// char    *ft_strrev(char *str);

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		size;
	char	temp;

	size = 0;
	while (str[size] != '\0')
		size++;
	i = 0;
	while (i < size / 2)
	{
		temp = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = temp;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[100];

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = 0;
	printf("Reverserd: %s", ft_strrev(str));
	return (0);
}
