#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all it's parameters
 * @n: constant unsigned integer
 * Return: 0 if n is 0 else the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	/*Declare variables to be used*/
	unsigned int i, sum = 0;
	/*declare the va_list*/
	va_list arg;
	/*Keying in requirements*/
	if (n == 0)
		return (0);
	/*set the conditions in va_start macro*/
	va_start(arg, n);
	/*using a for loop to start from 0 and end at the n*/
	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);/*to know the type and runs thru list*/
	va_end(arg);/*end the list*/
	return (sum);
}
