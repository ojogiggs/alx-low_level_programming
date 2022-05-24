#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * struct node - struct with three members
 * @str: pointer to string
 * @len: integer
 * @next: pointer to node
 *
 * Description: Singly list struct
 */

typedef struct node
{
	char *str;
	unsigned int len;
	struct node *next;
} list_t;

/*Prototypes*/
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /*_LISTS_H_*/
