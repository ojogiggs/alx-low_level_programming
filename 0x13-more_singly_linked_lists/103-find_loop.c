#include "lists.h"
/**
 * find_listint_loop - finds the loop in the list
 * @head: pointer to the first node in the list
 * Return: address where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	/*declare variables to be used*/
	listint_t *fast, *slow;
	/*check if head is NUll or next address is Null*/
	if (head == NULL || head->next == NULL)
		return (NULL);
	/*using floyd cycle finding algorithm, initialize pointers*/
	fast = slow = head;
	/*move slow by one address, fast by two*/
	fast = fast->next->next;
	slow = slow->next;
	/*loop through and check if there's a loop*/
	while (slow && fast && fast->next)
	{
		if (fast == slow)
			break;/*there's a loop*/
		/*still move slow by one address and fast by two*/
		slow = slow->next;
		fast = fast->next->next;
	}
	/*check if there was loop*/
	if (fast != slow)
		return (NULL);/*there's no loop*/
	/*if the program comes here there's loop*/
	slow = head;/*initialize slow back*/
	/*loop through again till fast == Slow*/
	while (fast != slow)
	{
		/*move at same pace to locate where the loop starts*/
		slow = slow->next;
		fast = fast->next;
	}
	/*where slow == fast is the address the loop starts*/
	return (slow);
}
