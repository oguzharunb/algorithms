#include <string.h>

int	lengthOfLongestSubstring(char* s)
{
	int 	last_occurence[256];
	int		i;
	int		max_len;
	int		current_len;

	memset(last_occurence, -1, 256 * sizeof(int));
	i = 0;
	max_len = 0;
	current_len = 0;
	while (s[i])
	{
		if (last_occurence[s[i]] == -1 || (i - last_occurence[s[i]]) > current_len)
		{
			current_len++;
		}
		else
		{
			current_len = (i - last_occurence[s[i]]);
		}
		last_occurence[s[i]] = i;
		if (current_len > max_len)
			max_len = current_len;
		i++;
	}	
	return (max_len);
}

#include <stdio.h>
int	main(void)
{
	char arr[] = "c";
	int ret = lengthOfLongestSubstring(arr);
	printf("ret: %d\n", ret);
	return (0);
} 