#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *current;  // nodo que estamos mirando ahora
    t_list *prev;     // nodo anterior al current
    t_list *next;     // nodo siguiente (para no perder la lista)

    current = *begin_list; // empezamos desde el primer nodo
    prev = NULL;           // al principio no hay anterior

    while (current)
    {
        // guardamos el siguiente nodo ANTES de hacer nada
        next = current->next;

        // si el nodo actual es el que queremos eliminar
        if (cmp(current->data, data_ref) == 0)
        {
            // CASO 1: NO es el primer nodo
            if (prev)
                prev->next = next;  // saltamos el nodo actual

            // CASO 2: es el primer nodo
            else
                *begin_list = next;  // movemos la cabeza de la lista

            // liberamos el nodo eliminado
            free(current);
        }
        else
        {
            // si no se elimina, avanzamos prev
            prev = current;
        }

        // siempre avanzamos current
        current = next;
    }
}
