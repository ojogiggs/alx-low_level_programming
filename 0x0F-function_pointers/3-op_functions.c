#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds two arguments
 * @a: first argument
 * @b: second argument
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two arguments
 * @a: first argument
 * @b: second argument
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two arguments
 * @a: first argument
 * @b: second argument
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two arguments
 * @a: first argument
 * @b: second argument
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of two arguments
 * @a: first argument
 * @b: second argument
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
