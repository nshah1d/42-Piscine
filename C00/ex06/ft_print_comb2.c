/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:55:58 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/03 21:50:25 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	int_to_char(int i)
{
	int	tens;
	int	ones;

	if (i < 10)
	{
		print_char('0');
		print_char(i + '0');
	}
	else
	{
		tens = i / 10;
		ones = i % 10;
		print_char(tens + '0');
		print_char(ones + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			int_to_char(i);
			print_char(' ');
			int_to_char(j);
			if (i < 98)
			{
				print_char(',');
				print_char(' ');
			}
			j++;
		}
		i++;
	}
}
