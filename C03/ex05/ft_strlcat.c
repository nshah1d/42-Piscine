/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:36:02 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/08 16:27:06 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ln_dest;
	unsigned int	ln_src;

	i = get_len(dest);
	j = 0;
	ln_dest = get_len(dest);
	ln_src = get_len(src);
	if (size < 1)
		return (ln_dest + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	if (size < ln_dest)
		return (ln_src + size);
	else
		return (ln_dest + ln_src);
}
