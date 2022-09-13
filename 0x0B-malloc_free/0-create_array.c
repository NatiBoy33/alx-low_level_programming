#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array -  creates an array of chars, and initializes
 *@size: number of array
 *@c: character
 *Return: NULL if size = 0 a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int s;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));

	if (a == NULL)
	{
		return (0);
	}
	for (s = 0; s < size; s++)
	{
		*(a + s) = c;
	}
	return (a);
}
