/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 06:23:17 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/26 12:00:05 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, int left, int middle, int right)
{
	int	space;

	space = 1;
	if (x > 0)
	{
		ft_putchar(left);
	}
	while (space < (x - 1))
	{
		ft_putchar(middle);
		space++;
	}
	if (x > 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	space;

	space = 1;
	if (x > 0 && y > 0)
	{
		print_line(x, '/', '*', '\\');
	}
	while (space < y - 1 && x > 0)
	{
		print_line(x, '*', ' ', '*');
		space++;
	}
	if (y > 1 && x > 0)
	{
		print_line(x, '\\', '*', '/');
	}
}
