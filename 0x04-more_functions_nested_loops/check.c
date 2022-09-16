#include <stdio.h>

int main(void)
{
	int n;
	n = 0;

	for (n = 0; n <= 9; n++)
	{
		if ((n != 2) && (n != 4))
		{
			printf("%d", n);
		}
	}
	printf("\n");
}
