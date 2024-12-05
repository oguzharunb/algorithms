/*
Example 1:

Input: start = "_L__R__R_", target = "L______RR"
Output: true
Explanation: We can obtain the string target from start by doing the following moves:
- Move the first piece one step to the left, start becomes equal to "L___R__R_".
- Move the last piece one step to the right, start becomes equal to "L___R___R".
- Move the second piece three steps to the right, start becomes equal to "L______RR".
Since it is possible to get the string target from start, we return true.

Example 2:

Input: start = "R_L_", target = "__LR"
Output: false
Explanation: The 'R' piece in the string start can move one step to the right to obtain "_RL_".
After that, no pieces can move anymore, so it is impossible to obtain the string target from start.

Example 3:

Input: start = "R__R", target = "__RR"
Output: false
Explanation: The piece in the string start can move only to the right, so it is impossible to obtain the string target from start.
*/
#include <string.h>
#include <stdio.h>
int canChange(char* start, char* target)
{
	char *source = strdup(start);
	int i = 0;
	while(target[i])
	{
		if (target[i] == 'L')
		{
			while(*source == '_')
				source++;
			if (*source == 'L')
				source++;
		}
		else if (target[i] == 'R')
		{
			while(*source == '_')
				source++;
			if (*source == 'R')
				source++;
		}
		i++;
	}
    printf("source: %s\n", source);
	while (*source)
	{
		if(*source != '_')
			return 0;
		source++;
	}
	return 1;
}