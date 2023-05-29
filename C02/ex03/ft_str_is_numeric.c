/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:42:58 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/05 17:44:14 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_numeric(char c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_numeric(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
