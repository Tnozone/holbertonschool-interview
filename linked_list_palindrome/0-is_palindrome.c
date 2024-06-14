#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * recurPalindrome - checks if singly linked list is palindrome
 * @left: pointer to head of singly linked list
 * @right: head of singly linked list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */

int recurPalindrome(listint_t **start, listint_t *end)
{
    int check;

    if (end == NULL)
        return 1;  /* Base case: end of list */

    check = check_recursively(start, end->next);
    if (check == 0)
        return 0;  /* Early termination if mismatch found */

    check = ((*start)->n == end->n) ? 1 : 0;
    *start = (*start)->next;  /* Advance start for next comparison */

    return check;
}

/**
 * is_palindrome - checks if singly linked list is palindrome
 * @head: pointer to head of singly linked list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	if (!head)
		return (0);
	return (recurPalindrome(head, *head));
}
