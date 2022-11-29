#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *print_listint - Prints all the elements of a listint_t list.
  *
  *@h: pointer to the head of the list.
  *
  *Return: The number of nodes in listint_t list.
  *
  **/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
