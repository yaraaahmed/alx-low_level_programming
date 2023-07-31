#include "lists.h"
/**
 * listint_len - return number of elements
 * @h: linked list type
 * Return: number
*/
size_t listint_len(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
		nm++;
		h = h->next;
	}
	return (nm);
}
