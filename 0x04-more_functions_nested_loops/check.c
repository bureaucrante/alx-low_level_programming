#include <stdio.h>

int main(void)
{
	int c;

	printf("enter character: ");
	scanf("%lc", &c);

	if ((c >= 48) && (c <= 57))
	{
		printf("%c is a number!\n", c);
		
		return (1);
	}
	else
	{
		printf("%c is not a number!\n", c);

		return (0);
	}
}
