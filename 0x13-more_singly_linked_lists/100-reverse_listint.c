#include"lists.h"
/**
 * reverse_listint - reverses a list
 * @head: pointer to first node
 * Return: Pointer to new first node
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *nxt = NULL;

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}

	*head = prv;
	return (*head);
}
