#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 * @h: pointer to the first node
 * Return: number of element nodes
 */

size_t listint_len(const listint_t *h)
{
	/*declare variables to be used*/
	int count = 0;
	const listint_t *ptr = h;
	/*loop through and count the number of elements*/
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
