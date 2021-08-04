#include "lists.h"
/**
 * listint_len - Will return number of elements in a linkedlist
 *
 * @h: Only parameter & is head
 *
 * Return: Should returm the  number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t no_nodes = 0;
while (h)
{
no_nodes++;
h = h->next;
}
return (no_nodes);
}
