
#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* struct list_t - singly linked list
* @len: length of the string
* @str: string
* @next: points to the next node
*/
typedef struct list_t
{
	char *str;

	size_t len;

	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
