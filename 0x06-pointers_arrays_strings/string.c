#include <stdio.h>
#include <string.h>

int main()
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	
	int i, j, k, n;

	int temp;
	
	n = 13;
	/*while (a[n] != '\0')
	{
		n++;
	}*/

	for (j = 0; j <= (n/2); j++)
	{
		for (i = 0; i <= (n/2); i++)
		{
			temp = a[i];
			a[i] = a[n - 1 - i];
			a[n - 1 - i] = temp;
		}
		printf("%d\n", a[i]);
	}

	putchar('\n');

	return (0);
}
