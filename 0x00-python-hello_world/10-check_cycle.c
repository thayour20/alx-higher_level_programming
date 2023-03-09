#include <stdio.h>
#include <stdio.h>
/**
 * check_cycle - checks if singly linked list is a cycle
 * @list: - a set of list
 * Return: 0 if it is not a circle and 1 if it is a circle list
 */

int check_cycle(listint_t *list)
{
	listint_t *fast = list;
	listint_t *slow = list;

	if (!list)
		return (0);

	while (1)
	{
		if (fast->next != NULL && fast->next->next != NULL)
		{
			fast = fast->next->next;
			slow = slow->next;

			if (fast == slow)
				return (1);
		}
		else
			return (0);
	}
}
