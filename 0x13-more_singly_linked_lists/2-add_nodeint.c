#include "lists.h"
#include <string.h>
/**
 * *add_nodeint - Will  add a node to a linked list head
 *
 * @head: 1st param & is a linked list head
 *
 * @n: 2nd param & is an int element of the linked list
 *
 * Return: Should return the  number of elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = (listint_t *) malloc(sizeof(listint_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
