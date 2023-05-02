#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: head of linked list
 * @n: integer
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *end;

	end = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = temp;

	return (temp);
}
