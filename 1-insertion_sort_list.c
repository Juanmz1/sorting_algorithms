#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: pointer to list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *trav, *hold;

	if (*list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while(current != NULL)
	{
		hold = current;
		trav = current->prev;
		while(trav && (trav->n > hold->n))
		{
			temp = trav;
			trav = trav->prev;
			hold->next = trav;
			temp->next = hold->next;
			if (hold->next != NULL)
				hold->next->prev = temp;
			temp->prev = hold;
			hold->next = temp;
			if (trav != NULL)
				trav->next = hold;
			else
				*list = hold;
			print_list(*list);
		}
		current = current->next;
	}
}
				
