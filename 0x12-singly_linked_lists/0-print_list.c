#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - prints elements of a linked list.
 *
 * @h: Pointer to the linked list.
 *
 * Return: returns thd number of nodes in list.
 */
size_t print_list(const list_t *h)
{
	size_t count;
	list_t *p;

	count = 0;

	if ((*h).str != NULL)
		count++;

	/*if ((*h).next == NULL)
		printf("[%d] %s\n", (*h).len, (*h).str);*/

	while ((*h).next != NULL)
	{
		/*count++;*/

		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		printf("[%d] %s\n", (*h).len, (*h).str);
		count++;
		p = (*h).next;
		/*count++;*/
		printf("[%d] %s\n", (*p).len, (*p).str);
		h = p;
		
	}
	return (count);
}
