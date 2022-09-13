#include "main.h"

/**
 *_puts - function that prints a string
 *@str: is string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
