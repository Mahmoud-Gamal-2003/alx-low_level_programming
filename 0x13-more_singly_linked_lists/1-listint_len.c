#include "lists.h"

/**
 * list_len - delt
 * @h: pointer
 *
 * Return: iszel
 */
size_t list_len(const list_h *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
