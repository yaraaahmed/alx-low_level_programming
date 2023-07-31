#include"lists.h"
/**
 * add_nodeint_end - adds a node in the end
 * @head: pointer first elements
 * @n: data to insert
 * Return: pointer, or 0
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tmp = *head;

	nw = malloc(sizeof(listint_t));

	if (!nw)
		return (0);

	nw->n = n;
	nw->next = 0;

	if (*head == 0)
	{
		*head = nw;
		return (nw);
	}

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = nw;

	return (nw);
}
