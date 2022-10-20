#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node_end - t
 * of a list_t listhe list_t list
 * @head: head of the linked listist
 * @str: string to store in th
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nechar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nechar = 0; str[nechar]; nechar++)
		;

	new->len = nechar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
