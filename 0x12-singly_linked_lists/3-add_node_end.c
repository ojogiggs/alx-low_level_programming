#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: pointer to struct node
 * @str: pointer to constant string
 * Return: address of head node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/*declare variables to be used*/
	unsigned int len = 0;
	list_t *temp, *ptr;
	/*set ptr to address of head*/
	ptr = *head;
	/* getting length of string*/
	while (str[len] != '\0')
		len++;
	/*malloc space for temp*/
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	/*copying string to temp*/
	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;
	/*check if head is NULL*/
	if (*head == NULL)
		*head = temp;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		/*set the previous node *next to address of next node*/
		ptr->next = temp;
	}
	return (*head);
}
