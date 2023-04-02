#include "lists.h"
#include <string.h>

/**
* add_node - function that adds new node at the beginning of a list_t list.
* @head: pointer to the new node
* @str: takes the string(name) of the new node
*
* Return: The address of the new node or Null if it fails.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	char *dup;
	int len;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(node);
		return (NULL);
	}
	
	len = 0;
	while (str[len])
		len++;

	node->str = dup;
	node->len = len;
	node->next = *head;

	*head = node;

	return (node);
}
