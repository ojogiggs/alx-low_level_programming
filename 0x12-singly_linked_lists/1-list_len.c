#include "lists.h"

/**
 * list_len - return number of elements in a linked list
 * @h: struct pointer
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	/*declare variables to be used in loop and node*/
	size_t count = 0;
	/*go through loop and count*/
	while (h != NULL)
	{
		h = h->next;/*h is the address of the next struct*/
		count++;
	}

	return (count);
}
