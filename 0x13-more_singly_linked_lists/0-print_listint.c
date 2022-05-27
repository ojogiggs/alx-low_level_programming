#include "lists.h"

/**
 * print_listint - prints out all elements of a list
 * @h: pointer to a node
 * Return: number of element nodes
 */

size_t print_listint(const listint_t *h)
{
	/*declare variables to be used*/
	int count = 0;
	const listint_t *ptr;
	/*set ptr to h address*/
	ptr = h;
	/*traverse the loop and print out the values*/
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		/*set ptr to the next address*/
		ptr = ptr->next;
	}
	return (count);
}
