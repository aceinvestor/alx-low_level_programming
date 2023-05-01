#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: head to linked list
 * Return: returns the number of elements in a linked
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
