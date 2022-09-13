#include "main.h"
/**
 *print_rev - string in reverse
 *@s: character
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;
	while (s[j])
	{
		putchar(s[j]);
		j--;
	}
	putchar('\n');
}
