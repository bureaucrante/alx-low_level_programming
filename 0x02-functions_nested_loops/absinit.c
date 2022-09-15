#include <stdio.h>



int main(void)
{
	int num;

	printf("type a number: ");
	scanf("%d", &num);

	if (num < 0)
	{
		int abs(num);
		abs(num) = num * -1;

		printf("the absolute value of %d is %d\n", num, (abs(num)));
	}
	return(0);
}
