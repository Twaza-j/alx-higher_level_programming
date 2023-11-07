#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: a pointer to the first node in the list
 *
 * Return: a pointer to the first node in the new list
 */
void reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *now = *head;
	listint_t *next = NULL;

	while (now)
	{
		next = now->next;
		now->next = last;
		now = next;
	}

	*head = last;
}

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: a double pointer to the linked list
 *
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(listint_t **head)
{
	listint_t *slag = *head, *fast = *head, *temp = *head, *dup = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);
	while (1)
	{
		fast = fast->next->next;
		if (!fast)
		{
			dup = slag->next->next;
			break;
		}
		slag = slag->next;
	}

	reverse_listint(&dup);

	while (dup && temp)
	{
		if (temp->n == dup->n)
		{
			dup = dup->next;
			temp = temp->next;
		}
		else
			return (0);
	}

	if (!dup)
		return (1);

	return (0);
}
