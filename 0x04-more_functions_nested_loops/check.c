#include <stdio.h>

int main(void)
{
	int c;

	printf("Please enter the character: ");
	scanf("%lc", &c);
	
	if ((c >= 65) && (c <= 90))
	{
		printf("%c is uppercase!\n", c);
		
		return (1);
	}
	else
	{
		printf("%c is not uppercase!\n", c);

		return (0);
	}
}
