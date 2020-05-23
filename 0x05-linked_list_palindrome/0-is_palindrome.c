#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome.
 * @head: the list.
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */

int is_palindrome(listint_t **head)
{
	listint_t *temp;
	int a, b, buf[1000000];

	if (!head)
		return (0);

	temp = *head;

	for (a = 0; temp != NULL; a++)
	{
		buf[a] = temp->n;
		temp = temp->next;
	}

	a--;

	for (b = 0; b < a; b++, a--)
	{
		if (buf[b] != buf[a])
			return (0);
	}

	return (1);
}
