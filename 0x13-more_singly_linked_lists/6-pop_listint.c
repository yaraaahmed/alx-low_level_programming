#include"lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer to the first elements
 * Return: data elements that was deleted, or NULL if it is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int number;

	if (!head || !*head)
		return (NULL);

	number = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (number);
}
