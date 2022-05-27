#include "lists.h"

/**
 * reverse_listint - reverse the lists
 * @head: pointer to pointer to head
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
	/*declare variables to be used*/
	listint_t *prev, *current;
	/*check if head is not NULL*/
	if (*head == NULL)
		return (NULL);
	/*initialize pointers*/
	current = *head;
	prev = NULL;
	/*loop through and reverse the list by updating address*/
	while (*head != NULL)
	{
		/*set current to next address*/
		current = current->next;
		/*update the next address in node to previous*/
		(*head)->next = prev;
		/*set prev to the head address*/
		prev = *head;
		/*move head to the next address (current)*/
		*head = current;
	}
	/* head is NULL set it to the prev address*/
	*head = prev;
	return (*head);
}
