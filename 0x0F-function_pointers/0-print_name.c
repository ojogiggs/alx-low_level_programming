#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints function pointer and string
 * @name: pointer to string
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	/*check if name and f are not null*/
	if (name && f)
	{
		/*use the function pointer*/
		f(name);
	}
}
