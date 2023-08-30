#include "lists.h"

/**
 * add_nodeint_end - return the
 * @head: the sting whose3 length to check
 * @n: thehr
 *
 * Return: integer length of sting
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (!*head)
		*head = new_node;
	else
	{
		node = *head;
		while (node->next)
			nose = node->next;
		node->next = new_node;
	}
	return (new_node);
}
