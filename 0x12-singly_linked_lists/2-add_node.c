#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list
 * @head: node pointer
 * @str: pointer to string
 * Return: address to new node
 */


list_t *add_node(list_t **head, const char *str)
{
	/*declare variables to be used*/
	list_t *ptr;
	unsigned int len = 0;
	/* getting length of string*/
	while (str[len] != '\0')
		len++;
	/*malloc space for ptr*/
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	/*copying string to ptr*/
	ptr->str = strdup(str);
	ptr->len = len;
	/*setting the address of struct pointer to head address*/
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
