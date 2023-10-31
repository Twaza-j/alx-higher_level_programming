#include "lists.h"

/**
 * insert_node - Inserts a num into a sorted singly_linked list.
 * @head: Pointer to the head of the linked list
 *
 * Return: NULL if the function fails otherwise - a pointer to the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *current;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = number;

	if (node == NULL || node->n >= number)
	{
		current->next = node;
		*head = current;
		return (current);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	current->next = node->next;
	node->next = current;

	return (current);
}
