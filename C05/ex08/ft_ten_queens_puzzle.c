/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:30:02 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/11 06:10:05 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	backtracking_rec(int table[10], int *result, int position)
{
}

int	ft_ten_queens_puzzle(void)
{
	int	table[10];
	int	i;
	int	result;

	i = -1;
	while (++i < 10)
		table[i] = -1;
	result = 0;
	backtracking_rec(table, &result, 0);
	return (result);
}
