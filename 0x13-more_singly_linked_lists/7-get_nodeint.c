#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: first node
 * @index: index of the node
 * Return: pointer, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tmp = head;

	while (tmp && a < index)
	{
		tmp = tmp->next;
		a++;
	}

	return (tmp ? tmp : NULL);
}
