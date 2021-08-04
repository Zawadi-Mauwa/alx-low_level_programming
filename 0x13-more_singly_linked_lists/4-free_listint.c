#include "lists.h"
/**
 *free_listint - Function that'll free a memory location
 *
 *@head: Only parqm & is the head of the linked list
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
if (head == NULL)
return;
while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
free(head);
}
