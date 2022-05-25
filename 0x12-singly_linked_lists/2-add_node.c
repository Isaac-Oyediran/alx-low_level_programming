#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list
 * @head: points to the head of the list
 * @str: string to store in the list
 *
 * Return: address of new node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;

	if (!(head && str))
		return (NULL);
	mew = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	for (i = 0;str[i]; i++)
	{}
	new->str = strdup(str);
	if (!(new->str))
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
