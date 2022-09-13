#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - the pointer function
 *
 *@name: the name
 *
 *@f: the pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;

	(*f)(name);
}
