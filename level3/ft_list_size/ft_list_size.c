typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	t_list *tmp = begin_list;
	int count = 0;

	while (tmp)
	{
		tmp = tmp -> next;
		count++;
	}
	return (count);
}