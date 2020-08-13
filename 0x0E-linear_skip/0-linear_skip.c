#include "search.h"

/**
 * linear_skip - Check a value in a linked list
 * @list: Pointer to the head
 * @value: Value to search
 *
 * Return: pointer to value or null
 **/

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *n, *p;

	if (!list)
		return (NULL);
	n = list->express;
	p = list;

	while (n)
	{
		printf("Value checked at index [%lu] = [%d]\n", n->index, n->n);
		if (n->n >= value || !n->express)
		{
			if (!n->express && n->n < value)
			{
				p = n;
				while (n->next)
					n = n->next;
			}
			printf("Value found between indexes [%lu] and [%lu]\n",
			       p->index, n->index);
			while (p)
			{
				printf("Value checked at index [%lu] = [%d]\n",
				       p->index, p->n);
				if (p->n == value)
					return (p);
				if (p->n > value)
					return (NULL);
				p = p->next;
			}
			break;
		}
		p = n;
		n = n->express;
	}
	return (NULL);
}
