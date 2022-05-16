#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings followed by const
 * @separator: pointer to const. char
 * @n: unsigned int argument
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	/*declare variables and va_list*/
	unsigned int i;
	char *str;
	va_list arg;
	/*initialize arg with n*/
	va_start(arg, n);
	/*looping through the arguments*/
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
