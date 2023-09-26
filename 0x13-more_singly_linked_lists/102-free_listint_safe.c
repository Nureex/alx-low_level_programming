#include "lists.h"
#include <stdio.h>
/**
 * frees a linked list
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: 0
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenth = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			*h = temp;
			lenth++;
		}
		else
		{
			*h = NULL;
			lenth++;
			break;
		}
	}

	*h = NULL;

	return (lenth);
}
