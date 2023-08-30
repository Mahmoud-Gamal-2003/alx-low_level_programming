#include "lists.h"

/**
 * listint_len - delt
 * @h: pointer
 *
 * Return: iszel
 */
size_t listint_len(const listint_h *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
