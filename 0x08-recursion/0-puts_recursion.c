#include "main.h"
/**
 * _puts_recursion - printes a string followed by a new line.
 *@s: holds a string.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar(10);
	}
	else
	{
		putchar(*s);
		_puts_recursion(++s);
	}
}
