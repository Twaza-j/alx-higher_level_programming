#include "lists.h"

/**
 * check_cycle - function checks if a singly linked list has a cycle in it
 * @list: pointer to the beginning of the node
 *
 * Return: 0 if no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *slag, *rapid;

	if (!list)
		return (0);
	slag = list;
	rapid = list->next;

	while (rapid && slag && rapid->next)
	{
		if (slag == rapid)
			return (1);
		slag = slag->next;
		rapid = rapid->next->next;
	}
	return (0);
}
