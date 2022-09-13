#include "main.h"
#include <stdio.h>

/**
 *_strchr - location function
 *@s: string
 *@c: character
 *
 *Return:  first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
