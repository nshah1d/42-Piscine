/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 07:03:35 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/18 09:45:03 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : do_op
// Expected files   : *.c, *.h
// Allowed functions: atoi, printf, write
// --------------------------------------------------------------------------------
// 
// Write a program that takes three strings:
// - The first and the third one are representations of base-10 signed integers
//   that fit in an int.
// - The second one is an arithmetic operator chosen from: + - * / %
// 
// The program must display the result of the requested arithmetic operation,
// followed by a newline. If the number of parameters is not 3, the program
// just displays a newline.
// 
// You can assume the string have no mistakes or extraneous characters. Negative
// numbers, in input or output, will have one and only one leading '-'. The
// result of the operation fits in an int.
// 
// Examples:
// 
// $> ./do_op "123" "*" 456 | cat -e
// 56088$
// $> ./do_op "9828" "/" 234 | cat -e
// 42$
// $> ./do_op "1" "+" "-43" | cat -e
// -42$
// $> ./do_op | cat -e
// $

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "do_op.h"

int	main(int ac, char **av)
{
	int res;

	res = 0;
	if (ac != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (av[2][0] == 42)
		res = OP_MUL(atoi(av[1]), atoi(av[3]));
	if (av[2][0] == 43)
		res = OP_ADD(atoi(av[1]), atoi(av[3]));
	if (av[2][0] == 45)
		res = OP_SUB(atoi(av[1]), atoi(av[3]));
	if (av[2][0] == 47)
		res = OP_DIV(atoi(av[1]), atoi(av[3]));
	if (av[2][0]	== 37)
		res = OP_MOD(atoi(av[1]), atoi(av[3]));
	printf("%d\n", res);
	return (0);
}
