/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:37:28 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 10:25:34 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_strcmp
// Expected files   : ft_strcmp.c
// Allowed functions: 
// --------------------------------------------------------------------------------
// 
// Reproduce the behavior of the function strcmp (man strcmp).
// 
// Your function must be declared as follows:
// 
// int    ft_strcmp(char *s1, char *s2);

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}

int		main(void)
{
	char	s1[100];
	char	s2[100];

	printf("Enter a string: ");
	fgets(s1, sizeof(s1), stdin);
	s1[strcspn(s1, "\n")] = 0;
	printf("Enter another string: ");
	fgets(s2, sizeof(s2), stdin);
	s2[strcspn(s2, "\n")] = 0;
	printf("Compare: %d\n", ft_strcmp(s1, s2));
	printf("Included: %d\n", strcmp(s1, s2));
	return (0);
}
