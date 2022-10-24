#include <stddef.h>
#include "lists.h"

/**
 * list_len - finds the number of element in a linked list.
 *
 * @h: Pointer to the linked list.
 *
 * Return: returns the number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	int count;
	list_t *ptr;

	count = 0;

	if (h == NULL)
		return (count);

	if ((*h).str != NULL)
	{
		count++;
		while ((*h).next != NULL)
		{
			ptr = (*h).next;
			if ((*ptr).str == NULL)
				return (count);

				count++;
			h = ptr;
		}
	}
	return (count);
}
