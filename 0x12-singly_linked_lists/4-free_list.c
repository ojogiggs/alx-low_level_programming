#include "lists.h"

/**
 * free_list - free all the malloce'ed blocks
 * @head: pointer to the first node
 */

void free_list(list_t *head)
{
	/*declare variables to be used*/
	list_t *ptr, *old;
	/*set both pointers to address of head*/
	ptr = head;
	old = head;
	/*traverse the nodes and free the spaces*/
	while (ptr != NULL)
	{
		ptr = ptr->next;/*ptr is now at the next address*/
		free(old->str);/*old frees the address at previous node*/
		free(old);
		old = ptr;/*old is set to next address*/
	}
}
