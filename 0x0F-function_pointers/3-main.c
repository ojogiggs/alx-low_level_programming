#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: argument
 * @argv: element in argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *st;
	/*key in requirements*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	/*initialize num1 and num2 with argv[1 and 3]*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	st = (argv[2]);/*set address st to arv[2]*/
	if (!get_op_func(st))/*if argument st is NULL*/
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(st)(num1, num2));/*print result of func.*/
	return (0);
}
