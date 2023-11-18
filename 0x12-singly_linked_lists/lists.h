
#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
* struct list_t - singly linked list
* @len: length of the string
* @str: string
* @next: points to the next node
*/
typedef struct list_t
{
	char *str;

	int len;

	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif
