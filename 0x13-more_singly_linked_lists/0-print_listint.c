#include "lists.h"

/**
 * print_listint - Prints elements of a singly linked list
 * @k: Pointer to a list
 * Prints elements of a singly linked lists.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *k)
{
	const listint_t *tp;
	unsigned int cntr = 0;

	tp = k;
	while (tp)
	{
		printf("%d\n", tp->n);
		cntr++;
		tp = tp->next;
	}
	return (cntr);
}
