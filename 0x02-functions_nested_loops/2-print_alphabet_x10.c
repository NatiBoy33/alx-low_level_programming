#include "main.h"
/**
 * print_alphabet_x10 - Check description
 * Description: It prints the alphabet
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char i;
	int p = 0;

	while (p <= 9)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		p++;
	}
}
