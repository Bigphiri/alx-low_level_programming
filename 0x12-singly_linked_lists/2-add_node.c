#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (head == NULL)
	{
		node = malloc(sizeof (list_t));
		(*node).str = strdup (str);
		(*node).len = sizeof (str);
		(*node).next = NULL;
		(*head) = node;
		
		/*return ((*node));*/
	}
	else
	{
	node = malloc(sizeof(list_t));
		(*node).str = strdup(str);
                (*node).len = strlen(str);
                (*node).next = *(head);
		(*head) = node;

		/*return ((*node));*/
	}

	if (node == NULL)
	       return (NULL);
	
	return ((node));

}
