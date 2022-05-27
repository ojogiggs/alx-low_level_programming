#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 *  @next: points to the next node
 *
 *  Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct listnode_s - singly linked list
 * @ptr: points to the list of value
 * @next: points to the list of nodei address
 *
 * Description: singly linked list node structure
 */
typedef struct listnode_s
{
	listint_t *ptr;
	struct listnode_s *next;
} listnode_t;

/*mandatory task*/
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/*For Advanced tasks*/
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);

/*used in advanced tasks*/
size_t in_node(const listint_t *head, listnode_t *node);
listnode_t *add_node(listnode_t **head, const listint_t *node);
void free_nodes(listnode_t *node);

#endif /*_LISTS_H_*/
