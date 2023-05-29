/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:54:20 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/07 23:17:26 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_printable(char c)
{
	if ((c >= ' ') && (c <= '~'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_printable(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
