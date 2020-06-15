#include "sort.h"

/**
 * swap_nodes - swap_nodes from prev to next
 * @prev: prev node
 * @next: next node
 * Return: nothing
 */
void swap_nodes(listint_t *prev_node, listint_t *next_node, listint_t **list){
	listint_t *before_prev, *after_next;

	before_prev = prev_node->prev;
	after_next = next_node->next;

	next_node->prev = before_prev;
	next_node->next = prev_node;
	if (before_prev)
		before_prev->next = next_node;
	else
		list = next_node;

	prev_node->prev = next_node;
	prev_node->next = after_next;
	if (after_next)
		after_next->prev = prev_node;
}


/**
 * insertion_sort_list - insertion_sort_list implementation
 * @listint_t: linked list header
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *aux;

	if (!list || !*list)
		return;

	iter = *list;

	while (iter->next != NULL)
	{
		if (iter->next->n < iter->n)
		{
			aux = iter->next;
			swap_nodes(iter, iter->next, list);
			print_list(*list);
			while (aux->prev && aux->n < aux->prev->n)
			{
				swap_nodes(aux->prev, aux, list);
				print_list(*list);
			}
			continue;
		}

		iter = iter->next;
	}
}
