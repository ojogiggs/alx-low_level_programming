#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - runs through the array and use function pointer
 * @array: pointer to array where elemtns are
 * @size: number of elements in array
 * @cmp: function pointer
 * Return: -1 if 0 else ind
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	/*declare variables to be used*/
	int i, ind;
	/*setting requirements*/
	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		/*go through the loop and use the function pointer*/
		for (i = ind = 0; i < size; i++)
		{
			ind = cmp(array[i]);/*adding the return value*/
			if (ind == 1)/*checks for the first true element*/
				return (i);
		}
	}
	/*if program comes here, it means the functions were not true*/
	return (-1);
}
