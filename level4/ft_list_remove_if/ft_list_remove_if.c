#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp = *begin_list;
	t_list *prev = NULL;
	t_list *to_free;

	while (tmp)
	{
		if (cmp(tmp->data, data_ref) == 0)
		{
			to_free = tmp;
			if (prev == NULL)
				*begin_list = tmp-> next;
			else
				prev-> next = tmp-> next;
			tmp = tmp-> next;
			free(to_free);
		}
		else
		{
			prev = tmp;
			tmp = tmp-> next;
		}
	}
}