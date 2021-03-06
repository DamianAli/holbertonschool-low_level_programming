#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a list of type struct listint_t and set node to NULL.
 * @head: Current head node of type struct listint_t.
 *
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *cur_node;
	listint_t *nex_node;

	if (head && *head)
	{
		cur_node = *head;

		while (cur_node != NULL)
		{
			nex_node = cur_node->next;
			free(cur_node);
			cur_node = nex_node;
		}

		*head = NULL;
	}
}
