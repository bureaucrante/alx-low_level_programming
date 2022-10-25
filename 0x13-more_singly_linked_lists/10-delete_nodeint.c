#include "lists.h"

/**
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr, *node;

	ptr = *head;
	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		node = ptr->next;
		free(ptr);
		*head = node;
	}

	for (i = 0; i < index - 1; i++)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}

	node = ptr->next;
	ptr->next = node->next;
	free(node);
	return (1);
}
