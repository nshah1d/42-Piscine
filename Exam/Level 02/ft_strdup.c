/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 07:02:01 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 08:00:17 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------
// 
// Reproduce the behavior of the function strdup (man strdup).
// 
// Your function must be declared as follows:
// 
// char    *ft_strdup(char *src);

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int	get_length(char *src)
{
	unsigned int	l;

	l = 0;
	while (src[l] != '\0')
		l++;
	return (l);
}

char	*str_copy(char *str, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strdup(char *src)
{
	unsigned int	l;
	char	*str;

	l = get_length(src);
	str = (char *)malloc(sizeof(char) * l);
	if (!(str))
		return (NULL);
	return (str_copy(str, src));
}

int	main(void)
{
	char str[100];

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = 0;
	printf("Duplicated: %s", ft_strdup(str));
	return (0);
}
