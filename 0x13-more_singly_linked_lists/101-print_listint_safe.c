#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to first node
 * Return: Number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	/*declare variables to be used*/
	listnode_t *node = NULL;
	size_t count = 0;
	/*check if there's loop or NULL*/
	while (!in_node(head, node))
	{
		/*adding address to node and checking if it returns NULL*/
		if (!add_node(&node, head))
		{
			free_nodes(node);
			exit(98);
		}
		/*printout the value*/
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		/*move to next address in head*/
		head = head->next;
	}
	/*check if there's loop*/
	if (head != NULL)
		printf("-> [%p] %d\n", (void *)head, head->n);
	free_nodes(node);
	return (count);
}
/**
 * in_node - compares the two structs if a node is similar
 * in address
 * @head: first node of lists containing values
 * @node: struct holding similar addresses
 * Return: 1 if true else 0
 */
size_t in_node(const listint_t *head, listnode_t *node)
{
	/*check if head is NULL*/
	if (head == NULL)
		return (1);
	/*loop through head and check if an address is same*/
	while (node != NULL)
	{
		/*check if address in node is same as head*/
		if (head == node->ptr)
			return (1);/*there's loop*/
		node = node->next;
	}
	return (0);/*if it comes here means there's no loop*/
}
/**
 * add_node - adds a new node at the beginning of the list
 * @head: pointer to pointer to first node of list
 * @node: pointer to the address struct
 * Return: head
 */

listnode_t *add_node(listnode_t **head, const listint_t *node)
{
	/*declare variable to be used*/
	listnode_t *new;
	/*malloc space and add values in new*/
	new = malloc(sizeof(listnode_t));
	if (new == NULL)
		return (NULL);
	/*adding values*/
	new->ptr = (listint_t *)node;/*typecast*/
	new->next = *head;/*set the address to node*/
	*head = new;
	return (*head);
}
/**
 * free_nodes - free node spaces used in address struct
 * @node: addresses added with malloc
 */
void free_nodes(listnode_t *node)
{
	/*setting condition*/
	if (node == NULL)
		return;
	/*free nodes using recursion*/
	free_nodes(node->next);
	free(node);
}
