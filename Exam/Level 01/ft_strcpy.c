/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 10:18:57 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 10:30:14 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions: 
// --------------------------------------------------------------------------------
// 
// Reproduce the behavior of the function strcpy (man strcpy).
// 
// Your function must be declared as follows:
// 
// char    *ft_strcpy(char *s1, char *s2);

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int	main(void)
{
	char	s1[100];
	char	s2[100];

	printf("Enter a string for s1: ");
	fgets(s1, sizeof(s1), stdin);
	s1[strcspn(s1, "\n")] = 0;
	printf("Enter a string for s2: ");
	fgets(s2, sizeof(s2), stdin);
	s2[strcspn(s2, "\n")] = 0;
	ft_strcpy(s1, s2);
	printf("New s1: %s", s1);
	return (0);
}
