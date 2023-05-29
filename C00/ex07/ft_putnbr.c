/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 07:38:05 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/04 09:28:08 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(char c)
{
	write(1, &c, 1);
}

void	make_array(int n, int k)
{
	int	i;

	i = n;
	i = k;
	i = 0;
}

void	ft_putnbr(int nb)
{
	int	i;
	int	n;

	i = 0;
	n = nb;
	if (nb < 0)
	{
		print_num('-');
		nb = nb * -1;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	make_array(nb, i);
}
