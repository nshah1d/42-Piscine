/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 06:19:46 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/11 06:31:21 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	if (argc > 0)
	{
		while (argv[0][j] != '\0')
		{
			ft_putchar(argv[0][j]);
			j++;
		}
		ft_putchar('\n');
	}
	return (0);
}
