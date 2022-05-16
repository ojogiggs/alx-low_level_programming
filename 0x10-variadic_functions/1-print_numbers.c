#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with strings
 * @separator: pointer to a constant string
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/*declare variables and macro to be used*/
	unsigned int i, num;
	va_list arg;
	/*initializing va_list with n to know the number of arguments*/
	va_start(arg, n);
	/*looping through and printing the values*/
	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, int);/*set's the int each argument*/
		printf("%d", num);
		if (i != (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
