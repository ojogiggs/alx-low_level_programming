#include "lists.h"

/**
 * free_listint - frees the enter list
 * @head: pointer to first node
 */

void free_listint(listint_t *head)
{
	/*declare variables to be used*/
	listint_t *ptr;

	ptr = head;
	/*traverse the list and free head*/
	while (ptr != NULL)
	{
		/*move to the next address*/
		ptr = ptr->next;
		/*after moving free head*/
		free(head);
		/*then set head to the next address*/
		head = ptr;
	}
}
