#include "lists.h"

/**
 * list_len -  function that return the number of elements in linked list_t
 * @h: pointer to first element
 * Return:  number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
