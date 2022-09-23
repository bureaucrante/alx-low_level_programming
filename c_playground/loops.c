#include <stdio.h>

int main(void)
{
	int i, j, k;
	int rows;
	
	printf("How many rows you want? ");
	scanf("%d", &rows);

	for (i=1; i <= rows; i++)
	{
		for (j = rows; j > i; j--)
		{
			printf("  ");
		}
		for (k = 1; k <= ((2*i) - 1); k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
