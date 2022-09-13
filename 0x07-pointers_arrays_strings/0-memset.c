#include "main.h"
#include <stdio.h>

/**
 *_memset - fills the first
 *@s: pointer
 *@b: constant char
 *@n: first char
 *Return: to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}


	return (s);
}
