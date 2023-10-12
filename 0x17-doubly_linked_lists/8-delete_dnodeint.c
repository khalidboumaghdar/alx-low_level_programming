#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted. Index starts at 0.
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *temp;
    unsigned int i = 0;

    if (*head == NULL)
        return (-1);

    current = *head;
    if (index == 0)
    {
        *head = current->next;
        if (current->next != NULL)
            current->next->prev = NULL;
        free(current);
        return (1);
    }

    while (i < index - 1)
    {
        current = current->next;
        if (current == NULL)
            return (-1);
        i++;
    }

    if (current->next == NULL)
        return (-1);

    temp = current->next;
    current->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = current;
    free(temp);

    return (1);
}
