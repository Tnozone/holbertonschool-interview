#include "lists.h"
#include <stdlib.h>


/**
 * insert a number into a sorted linked list.
 * Return: the address of the new node, or NULL if it failed
 */


listint_t *insert_node(listint_t **head, int number) 
{
    listint_t *new, *tmp1 = *head, *tmp2;

    if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
    if (new == NULL)
		return (NULL);

    new->n = number;
	if (!tmp1 || tmp1->n >= number)
	{
		new->next = tmp1, *head = new;
		return (new);
	}

    tmp2 = tmp1->next;
	while (tmp1 && tmp2 && (tmp2->n < number))
		tmp1 = tmp1->next, tmp2 = tmp1->next;

	tmp1->next = new, new->next = tmp2;

	return (new);
}
