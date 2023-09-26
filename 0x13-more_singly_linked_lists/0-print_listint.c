#include "lists.h"

/**
 * Prints elements of a singly linked lists
 * print_list int - Prints elements of a singly linked lists.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
