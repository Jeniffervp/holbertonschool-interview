#include "lists.h"

/**
 * insert_node - nserts a number into a sorted singly linked list.
 * @head: pointer to head of list.
 * @number: the value to insert.
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *cur, *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (0);
	new->n = number;

	if (*head == NULL || (*head)->n >= new->n)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	cur = *head;

	while (cur->next && cur->next->n < new->n)
	{
		cur = cur->next;
	}

	new->next = cur->next;
	cur->next = new;
	return (new);
}
