#include "lists.h"
#include <stdlib.h>

/**
 * sum listint
 * @head: Address of the first node of the list.
 * Return: Integer.
 * sum_listint - Sum all of the data (n) in a list.
 **/

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
