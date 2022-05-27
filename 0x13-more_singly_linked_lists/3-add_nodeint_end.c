#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of list
 * @head: pointer to pointer to the first node
 * @n: integer value to be added
 * Return: head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*declare variables to be used*/
	listint_t *new, *ptr;
	/*set ptr equal to the head address*/
	ptr = *head;
	/*malloc space for new node*/
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	/*set values in new node*/
	new->n = n;
	new->next = NULL;
	/*check if head is NULL*/
	if (*head == NULL)
		*head = new;
	else
	{
		/*check if address in node is NULL*/
		while (ptr->next != NULL)
			ptr = ptr->next;
		/*we have reached the end of node, now attach new*/
		ptr->next = new;
	}
	return (new);
}
