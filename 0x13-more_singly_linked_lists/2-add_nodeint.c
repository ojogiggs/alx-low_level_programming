#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: pointer to pointer to first node of list
 * @n: integer value to be added
 * Return: head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/*declare variable to be used*/
	listint_t *new;
	/*malloc space and add values in new*/
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	/*adding values*/
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
