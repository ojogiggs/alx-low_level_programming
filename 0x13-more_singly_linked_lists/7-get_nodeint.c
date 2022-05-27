#include "lists.h"
/**
 * get_nodeint_at_index - print value at nth position
 * @head: pointer to node
 * @index: index of the node starting at zero
 * Return: head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*declare variables to be used*/
	listint_t *ptr;
	unsigned int i = 0;
	/*check if head is not NULL*/
	if (head != NULL)
	{
		/*set ptr to head*/
		ptr = head;
		/*traverse the loop and i times*/
		while (i != index && ptr != NULL)
		{
			/*set ptr to the next address*/
			ptr = ptr->next;
			i++;
		}
		/*check if node exists*/
		if (ptr != NULL)
			return (ptr);
	}
	return (NULL);
}
