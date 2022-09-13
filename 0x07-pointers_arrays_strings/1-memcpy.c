#include "main.h"
#include <stdio.h>
/**
 *_memcpy - copy funcion
 *@dest: place to copy the memory
 *@src: memory area to copy from
 *@n: number of byte
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
