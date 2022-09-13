#include "main.h"
/**
 *_strncpy -  function that copies a string
 *@dest: first string
 *@src: second string
 *@n: limit
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
