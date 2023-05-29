/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 07:07:46 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 09:55:38 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------
// 
// Reproduce exactly the behavior of the function strcspn
// (man strcspn).
// 
// The function should be prototyped as follows:
// 
// size_t	ft_strcspn(const char *s, const char *reject);

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	main(void)
{
	char	s[100];
	char	reject[100];

	printf("Enter a string: ");
	fgets(s, sizeof(s), stdin);
	s[strcspn(s, "\n")] = 0;
	printf("Enter a string to find: ");
	fgets(reject, sizeof(reject), stdin);
	reject[strcspn(reject, "\n")] = 0;
	printf("Starting index in string: %zu\n", ft_strcspn(s, reject));
	printf("Returned should be: %lu\n", strcspn(s, reject));
	return (0);
}
