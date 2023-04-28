#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: head of link list
 * @str: string pointer to character
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = 0;
	int len = 0;

	while (str[len])
		len++;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = *head;
	*head = temp;

	return (*head);
}
