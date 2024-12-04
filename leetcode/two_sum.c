#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int	*ret = malloc(2 * sizeof(int));
    *returnSize = 2;
	if (!ret)
		return (NULL);
	for (size_t i = 0; i < numsSize; i++)
	{
		for (size_t j = i + 1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				*ret = i;
				ret[1] = j;
				return ret;
			}
		}
		
	}
    return (NULL);
}

#include <stdio.h>
int main(void)
{
	int arr[] = {3, 2, 4};
	int retSize;
	int *ret = twoSum(arr, 3, 6, &retSize);
	printf("[%d, %d]\n", ret[0], ret[1]);
	return 0;
}
