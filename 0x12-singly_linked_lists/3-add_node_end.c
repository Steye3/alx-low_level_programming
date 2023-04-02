#include "lists.h"
#include <string.h>

/**
* add_node - function that adds new node at the beginning of a list_t list.
* @head: pointer to the new node
* @str: takes the string(name) of the new node
*
* Return: The address of the new node or Null if it fails.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node1, *tail;
	char *dup;
	int len;
	
	dup = strdup(str);
	node1 = malloc(sizeof(list_t));
	if ((node1 == NULL || dup == NULL) || (node1 == NULL && dup == NULL))
		return (NULL);
	else
	{
		len = 0;
		while (str[len])
			len++;

		node1->str = dup;
		node1->len = len;
		node1->next = NULL;
		
		if (*head == NULL)
			*head = node1;
			
		else
		{
			tail = *head;
			while (tail->next != NULL)
				tail = tail->next;
			tail->next = node1;
		}
	}
