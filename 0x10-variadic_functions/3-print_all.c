#include "variadic_functions.h"
/**
 * use_c - function to get c argument
 * @arg: va_list
 */
void use_c(va_list arg, char *sep)
{
	printf("%s%c", sep, va_arg(arg, int));
}
/**
 * use_i - function to get i argument
 * @arg: va_list
 */
void use_i(va_list arg, char *sep)
{
	printf("%s%d", sep, va_arg(arg, int));
}
/**
 * use_f - function to get f argument
 * @arg: va_list
 */
void use_f(va_list arg, char *sep)
{
	printf("%s%f", sep, va_arg(arg, double));
}
/**
 * use_s - function to get s argument
 * @arg: va_list
 */
void use_s(va_list arg, char *sep)
{
	char *s;
	s = va_arg(arg, char *);
	if (!s)
		s = "(nil)";
	printf("%s%s", sep, s);
}
/**
 * print_all - prints anything
 * @format: pointer to string specifier
 */
void print_all(const char * const format, ...)
{
	/*declare variables and initialize struct array*/
	chr_st ch[] = {
		{"c", use_c},
		{"i", use_i},
		{"f", use_f},
		{"s", use_s},
		{NULL, NULL}
	};

	int i = 0, j = 0;
	char *separator;
	va_list arg;
	/*initializing arg with format*/
	va_start(arg, format);
	separator = "";
	/*looping through format and applying functions*/
	while (format && format[i])
	{
		while (j < 4)/*go through the struct array 4 times*/
		{
			if (format[i] == *(ch[j].str))
			{
				ch[j].f(arg, separator);/*using the function pointer*/
				separator = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(arg);
}
	
