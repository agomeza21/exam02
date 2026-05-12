#include <stdlib.h>

int     *ft_rrange(int start, int end)
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
		nums[i] = end;
		if (start < end)
			end--;
		else
			end++;
		i++;
	}
	return (nums);
}