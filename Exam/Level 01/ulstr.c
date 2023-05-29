/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:55:41 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/13 11:59:39 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ulstr
// Expected files   : ulstr.c
// Allowed functions: write
// --------------------------------------------------------------------------------
// 
// Write a program that takes a string and reverses the case of all its letters.
// Other characters remain unchanged.
// 
// You must display the result followed by a '\n'.
// 
// If the number of arguments is not 1, the program displays '\n'.
// 
// Examples :
// 
// $>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
// l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
// $>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
// s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
// $>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
// 3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
// $>./ulstr | cat -e
// $

#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	unsigned int	i;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (av[1][i] != '\0')
	{
		if (av[1][i] > 64 && av[1][i] < 91)
			av[1][i] += 32;
		else if (av[1][i] > 96 && av[1][i] < 123)
			av[1][i] -= 32;
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
