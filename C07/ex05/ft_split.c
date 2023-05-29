/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:39:23 by nshahid           #+#    #+#             */
/*   Updated: 2023/05/17 20:12:31 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// Count the number of strings / words that are inside the provided the string
// By counting the spaces (?)
// Number of words would be the number of spaces + 1...
// Allocate a memory for "EXTERNAL" array to hold the strings (number of words + 1 - for NULL)
// Go through string char by char.
// Compare char to charset (if == potential start of sep)
// Get the position of the "start"
// Add the length of charset 
// Get the string from start (pos earlier) to the end of length of charset
// Do strcmp(?)
// IF == 0 then it's a separator 
// End of first string - can then be removed (?) and added to an array (?)
// Could do strcpy (?) or would it be better to send it to another function - create a string (array) (?) and return it - add that to another array (?) allocate memory of the "internal" array by passing it the size of the string (counter)?
// The position of the end of the charset would then be a start of a new string...

int	number_of_strings(char *str, char *charset)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == charset[j])
			j++;
		if (charset[j] == '\0')
			k++;
		i++;
	}
	return (k+1);
}

int	main(void)
{
	char str[] = "Hello, World, What, is, new, there are so many words,here today";
	char *charset = ", ";
	
	// Get the number of words inside the string
	printf("Number of words: %d\n", number_of_strings(str, charset));
	int words = number_of_strings(str, charset);

	// Create a two-dimensional array
	char *array_of_strings;
	array_of_strings = (char *)malloc(1 * (words + 1) * sizeof(char));

	//Test random 2D array
	char h[] = "Hello";
	char w[] = "World";
	char *c[1][3] = {{h, w}};
	printf("%s", c[0][0]);
	char j[] = "What";
	c[0][0] = j;
	printf("%s", c[0][0]);
	
	// Assign to array of strings?
	array_of_strings[0][0] = h;
	printf("%s", array_of_strings[0][0]);
	return (0);
}
