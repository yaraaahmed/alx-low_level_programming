#include "lists.h"
/**
 *  insert_nodeint_at_index - insert new node
 *  @head: pointer to first node
 *  @idx: index the new node
 *  @n: data insert new node
 *  Return: pointer to new node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *nw;
	listint_t *tmp = *head;

	nw = malloc(sizeof(listint_));

	if (!nw || !head)
		return (NULL);
	nw->n = n;
	nw->next = NULL;

	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}

	for (i = 0; tmp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			nw->next = tmp->next;
			tmp->next = new;
			return (new);
		}

		else
			tmp = tmp->next;
	}
	return (NULL);
}
