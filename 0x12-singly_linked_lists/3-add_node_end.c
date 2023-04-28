#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to pointer
 * @str: string of list
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *end;
	int len = 0;

	end = *head;
	while (str[len])
		len++;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
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
