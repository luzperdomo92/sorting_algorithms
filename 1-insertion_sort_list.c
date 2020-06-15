#include "sort.h"

/**
 * swap_nodes - swap_nodes from prev to next
 * @prev: prev node
 * @next: next node
 * Return: nothing
 */
void swap_nodes(listint_t *prev_node, listint_t *next_node){
    listint_t *prev_aux, *next_aux;

    prev_aux = prev_node->prev;
    next_aux = next_node->next;
    next_node->prev = prev_aux;
    next_node->next = prev_node;
    prev_node->prev = next_node;
    prev_node->next = next_aux;
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
            swap_nodes(iter, iter->next);
            print_list(*list);
            while (aux->prev != NULL && aux->n < aux->prev->n)
            {
                swap_nodes(aux->prev, aux);
                print_list(*list);
                aux = aux->prev;
            }
        }

        iter = iter->next;
	}
}
