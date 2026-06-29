#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to pointer of the head of the list
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
    listint_t *slow = *head, *fast = *head;
    listint_t *prev = NULL, *next = NULL;
    listint_t *mid = NULL, *left, *right;

    if (*head == NULL || (*head)->next == NULL)
        return (1);

    /* Find middle using slow and fast pointers */
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    /* If odd length, skip the middle element */
    if (fast != NULL)
    {
        mid = slow;
        slow = slow->next;
    }

    /* Reverse the second half */
    prev = NULL;
    while (slow != NULL)
    {
        next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }

    /* Compare both halves */
    left = *head;
    right = prev;
    while (right != NULL)
    {
        if (left->n != right->n)
        {
            /* Optional: restore list, but not required for this task */
            return (0);
        }
        left = left->next;
        right = right->next;
    }

    return (1);
}
