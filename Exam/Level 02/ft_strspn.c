/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 07:09:43 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 10:20:20 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// ---------------------------------------------------------------
// 
// Reproduce exactly the behavior of the strspn function 
// (man strspn).
// 
// The function should be prototyped as follows:
// 
// size_t	ft_strspn(const char *s, const char *accept);

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	unsigned int	i;
	unsigned int	j;
	int				check;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		check = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				check = 1;
			j++;
		}
		if (!(check))
			return (i);
		i++;
	}
	return (i);
}

int	main(void)
{
	char	s[100];
	char	accept[100];
	printf("Enter a string: ");
	fgets(s, sizeof(s), stdin);
	s[strcspn(s, "\n")] = 0;
	printf("What to accept: ");
	fgets(accept, sizeof(accept), stdin);
	accept[strcspn(accept, "\n")] = 0;
	printf("Written function: %zu\n", ft_strspn(s, accept));
	printf("Included function: %lu\n", strspn(s, accept));
	return (0);
}
