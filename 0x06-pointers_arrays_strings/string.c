#include <stdio.h>
#include <string.h>

int main()
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	
	int i, j, k;

	int temp;
	
	int *n = a;
	
	int l = 13;

	for (i = 1; i < l; i++)
	{
		n++;
	}

	for (j = 0; j < i/2; i++)
	{
		temp = a[j];
		a[j] = *n;
		*n = temp;
		n--;
	}

	for (k = 0; k < l; k++)
	{
//		if (count != 0)
//		{
//			printf(", ");
//		}
		printf("%d", a[k]);
	}
//	printf("\n");


//	printf("%d, %d\n", *n, a[12]);

	return (0);
}
