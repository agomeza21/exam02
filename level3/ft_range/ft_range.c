#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int size;
	int *nums;
	int i = 0;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	nums = malloc(sizeof(int) * size);
	if (!nums)
        	return (NULL);
	while (i < size)
	{
		nums[i] = start;
		if (start < end)
			start++;
		else
			start--;
		i++;
	}
	return (nums);
}
