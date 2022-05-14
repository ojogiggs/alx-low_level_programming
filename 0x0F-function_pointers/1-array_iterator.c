#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - it sets functions to arrays
 * @array: pointer to array
 * @size: unsigned int telling the number of elements in array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/*declare variables to use in loop*/
	unsigned int i;
	/*state condition to enter loop*/
	if (array && action)
	{
		/*loop through array and use function pointer*/
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
