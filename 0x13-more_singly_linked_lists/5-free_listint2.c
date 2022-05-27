#include "lists.h"

/**
 * free_listint2 - frees lists and sets head to null
 * @head: pointer to pointer to head
 */

void free_listint2(listint_t **head)
{
	/*declare variables to be used*/
	listint_t *prev, *current;
	/*check if head is not NULL*/
	if (head != NULL)
	{
		prev = current = *head;
		/*traverse the list and free head*/
		while (current != NULL)
		{
			/*move to the next address*/
			current = current->next;
			/*after moving free prev*/
			free(prev);
			/*then set head to the next address*/
			prev = current;
		}
		/*all the list have been freed set head to NULL*/
		*head = NULL;
	}
}
