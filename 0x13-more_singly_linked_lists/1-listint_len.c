#include "lists.h"

/**
 * listint_len = Calculate the numbers of elements.
 * @h: Pointer to a list.
 * Return: Integers.
 **/

size_t listint_len(const listint_t *k)
{
	const listint_t *tp;
	unsigned int cnr = 0;

	tp = k;
	while (tp)
	{
		cnr++;
		tp = tp->next;
	}
	return (cnr);
}
