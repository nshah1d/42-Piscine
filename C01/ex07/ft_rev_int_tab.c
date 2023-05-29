/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:42:00 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/04 16:45:30 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	element;

	i = 0;
	while (i < size / 2)
	{
		element = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = element;
		i++;
	}
}
