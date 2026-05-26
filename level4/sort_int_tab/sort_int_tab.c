void sort_int_tab(int *tab, unsigned int size)
{
	int swapped = 1;
	int tmp;

	while (swapped)
	{
		swapped = 0;
		unsigned int i = 0;
		while (i < size)
		{
			if (i + 1 < size && tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				swapped = 1;
			}
			i++;
		}
	}
}