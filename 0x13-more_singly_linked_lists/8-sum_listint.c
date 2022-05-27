#include "lists.h"

/**
 * sum_listint - the sum of the lists value which is an integer
 * @head: pointer to the first node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	/*declare variables to be used*/
	listint_t *ptr;
	int sum = 0;
	/*set ptr to head*/
	ptr = head;
	/*traverse list till ptr is NULL*/
	while (ptr != NULL)
	{
		/*add the values of each list*/
		sum += ptr->n;
		/*change the address*/
		ptr = ptr->next;
	}
	return (sum);
}
