/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 07:08:44 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 10:07:01 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------
// 
// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).
// 
// The function should be prototyped as follows:
// 
// char	*ft_strpbrk(const char *s1, const char *s2);

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				return ((char *) s1 + i);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	s1[100];
	char	s2[100];

	printf("Enter a string: ");
	fgets(s1, sizeof(s1), stdin);
	s1[strcspn(s1, "\n")] = 0;
	printf("Enter a string to find: ");
	fgets(s2, sizeof(s2), stdin);
	s2[strcspn(s2, "\n")] = 0;
	printf("Written function: %s\n", ft_strpbrk(s1, s2));
	printf("Included function: %s\n", strpbrk(s1, s2));
	return (0);
}
