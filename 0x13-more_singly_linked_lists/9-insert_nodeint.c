#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at index position
 * @head: pointer to pointer to first node in list
 * @idx: index position to add node
 * @n: the value to be added
 * Return: the first node of list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/*declare variables to be used*/
	unsigned int i;
	listint_t *ptr, *new;
	/*set ptr to address of first node*/
	ptr = *head;
	/*check if idx is 0*/
	if (idx != 0)
	{
		/*traverse the list till index is reached*/
		for (i = 0; i < (idx - 1) && ptr != NULL; i++)
			ptr = ptr->next;
	}
	/* check if ptr is empty and index is not 0*/
	if (ptr == NULL && idx != 0)
		return (NULL);
	/*malloc space for new node*/
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	/*put values in new node*/
	new->n = n;
	new->next = NULL;
	/*insert the list*/
	if (idx == 0)
	{
		new->next = ptr;
		*head = new;/*changes the first node to new*/
		return (new);
	}
	/*if idx != 0*/
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
