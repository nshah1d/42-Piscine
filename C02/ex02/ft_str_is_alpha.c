/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:28:07 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/05 16:34:34 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_alpha(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
