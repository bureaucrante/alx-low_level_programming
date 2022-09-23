#include <stdio.h>
#include <stdlib.h>

/**
 */

int main(void)
{
	int first_r[5] = {10, 0, -1, 1, 2};
	int sec_r[5] = {0, 5, 4, 3, 1};
	
	int sum_r[5], i;

	for (i = 0; i < 5; i++)
	{
		sum_r[i] = first_r[i] + sec_r[i];
		
		printf("%d\n", sum_r[i]);
	}
}
