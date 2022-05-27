#include "lists.h"
/**
 * free_listint_safe - freeing the list
 * @h: pointer to pointer to list
 * Return: size of the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	/*declare variables*/
	listint_t *current;
	listnode_t *node = NULL;/*initialize address struct*/
	size_t count = 0;

	if (h == NULL)
		return (0);
	/*check if there's loop or NULL*/
	while (!in_node(*h, node))
	{
		/*adding address to node and checking if it returns NULL*/
		if (!add_node(&node, *h))
		{
			free_nodes(node);
			exit(98);
		}
		/*initialize current*/
		current = *h;
		/*move to the next address*/
		*h = (*h)->next;
		/*after moving free current*/
		free(current);
		count++;
	}
	/*makes the head NULL after the loop*/
	if (*h != NULL)
		*h = NULL;
	free_nodes(node);
	return (count);
}
