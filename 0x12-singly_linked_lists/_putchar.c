#include "main.h"

/**
 * _putchar - prints out a character
 * @c: character to be printed out
 * Return: ascii code of character printed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
