#include "lists.h"

/**
 * pop_listint - deletes first node and return it's value
 * @head: pointer to pointer head
 * Return: value
 */

int pop_listint(listint_t **head)
{
	/*declare variables to be used*/
	int value;
	listint_t *new;
	/*set address of head to new*/
	new = *head;
	/*key in requirements*/
	if (new == NULL)
		return (0);
	/*get the value of the node*/
	value = new->n;
	/*change new to next address*/
	new = new->next;
	/*free the node at head*/
	free(*head);
	/*set head to new address*/
	*head = new;
	return (value);
}
