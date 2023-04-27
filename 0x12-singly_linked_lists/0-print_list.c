#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t l = 0;

while (h)
{
if (h->str)
printf("[%u] %s\n", h->len, h->str);
if (!h->str)
printf("[0] (nil)\n");
l++;
h = h->next;
}

return (l);
}
