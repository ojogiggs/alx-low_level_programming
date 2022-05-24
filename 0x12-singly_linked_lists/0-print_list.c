#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: pointer to a struct
 * Return: number of elements printed
 */

size_t print_list(const list_t *h)
{
	/*declare variables to be used in loop and node*/
	size_t count = 0;
	/*go through loop and count*/
	while (h != NULL)
	{
		/*key in requirement*/
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;/*h is the address of the next struct*/
		count++;
	}

	return (count);
}
