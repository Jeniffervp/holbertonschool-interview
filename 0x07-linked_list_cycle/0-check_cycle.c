#include "lists.h"

/**
 * check_cycle - check the linked list if is a cycle or not.
 * @list: is the linked list.
 * Return: Always 0.
 */

int check_cycle(listint_t *list)
{
	listint_t *a, *b;

	if (!list)
		return (0);

	a = list;
	b = list->next;

	while (a != b)
	{
		a = a->next;
		if (!a)
			return (0);
		b = b->next;
		if (!b)
			return (0);
		b = b->next;
		if (!b)
			return (0);
	}
	return (1);
}
