#include "main.h"
#include <stdio.h>

/**
 *_strlen - function that returns the length of a string.
 *@s: string
 *
 *Return: length of the string
 */
int _strlen(char *s)
{
	int m = 0;

	while (*s++)
	{
		m++;
	}
	return (m);
}
