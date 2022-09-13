#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup -  function that returns a pointer
 *@str: have string
 *Return: NULL if str = NULL else return string
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int x, y;

	x = 0;
	y = 0;

	if (str == NULL)
		return (NULL);

	while (str[y])
		y++;

	s = malloc(sizeof(char) * (y + 1));
	if (s == NULL)
		return (NULL);

	while ((s[x] = str[x]) != '\0')
		x++;

	return (s);
}
