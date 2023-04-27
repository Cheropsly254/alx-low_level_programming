#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
list_t *pvar;

while (head != NULL)
{
pvar = head;
head = head->next;
free(pvar->str);
free(pvar);
}
}
