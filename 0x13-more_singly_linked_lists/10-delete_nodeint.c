#include "lists.h"
/**
 *  delete_nodeint_at_index - deletes the node at index
 *  @head: pointer to first elements
 *  @index: index node to delete
 *  Return: 1, or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *crn = NULL;
	unsigned int b = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (b < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		b++;
	}
	crn = tmp->next;
	tmp->next = crn->next;
	free(crn);

	return (1);
}
