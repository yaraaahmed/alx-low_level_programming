#include"lists.h"
/**
 * free_listint2 - free linked
 * @head: pointer listint_t
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == 0)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = 0;
}
