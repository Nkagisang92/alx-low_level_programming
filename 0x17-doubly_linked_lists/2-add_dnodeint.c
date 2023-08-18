#include "lists.h"

/**
 *  add_dnodeint - adds a new node at the beginning of a dlistint_t  list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return:  address of the new element , or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        dlistint_t  *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
