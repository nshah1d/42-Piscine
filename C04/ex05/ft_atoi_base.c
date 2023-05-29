/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:05:33 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/09 17:26:20 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_for_double(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (*(base + i))
	{
		j = i + 1;
		while (*(base + j))
		{
			if (*(base + i) == *(base + j))
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_val;
	int	pos;
	int	result;
	int	sign;

	sign = 1;
	base_val = 0;
	pos = 0;
	while (base[base_val])
	{
		if (base[base_val] == '-' || base[base_val] == '+')
			return (0);
		++base_val;
	}
	if (base_val < 2)
		return (0);
	if (check_for_double(base))
		return (0);
}
