#include "lists.h"

/**
 * print_listint - return the
 * @h: the sting whose3 length to check
 *
 * Return: integer length of sting
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
