#include "lists.h"
/**
 * free_listint - frees a link
 * @head: listint_t list freed
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
