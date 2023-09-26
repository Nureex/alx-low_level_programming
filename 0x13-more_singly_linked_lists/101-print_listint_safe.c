#include "lists.h"

/**
 * prints a linked lists
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: 0
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numb = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		numb++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (numb);
}
