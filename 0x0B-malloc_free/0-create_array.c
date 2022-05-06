#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates space from heap and assigning
 * a character to it
 * @size: unsigned int
 * @c: string of characters to be inputted
 * Return: ptr
 */
char *create_array(unsigned int size, char c)
{

	/*declare pointer and variables to be used in loop*/
	unsigned int i;

	char *ptr;
	/*check if size is equal to 0*/
	if (size == 0)
		return (NULL);
	/*typecasting the char return type*/
	ptr = (char *)malloc(size * sizeof(char));
	/*return Null if the space wasn't created*/
	if (ptr == NULL)
		return (NULL);
	/*now replacing all the empty spaces with char c usinig loop*/
	for (i = 0; i < size; i++)
	{
		/*adds character c as ptr moves to next address*/
		*(ptr + i) = c;
	}
	return (ptr);
}
