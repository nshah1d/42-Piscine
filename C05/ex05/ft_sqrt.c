/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:55:51 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/10 12:02:03 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	rad_exp;

	rad_exp = 1;
	if (nb > 0)
	{
		while (rad_exp * rad_exp <= nb)
		{
			if (rad_exp * rad_exp == nb)
				return (rad_exp);
			if (rad_exp > 46340)
				return (0);
			rad_exp++;
		}
	}
	return (0);
}
