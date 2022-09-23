#include <stdio.h>

int main()
{
	char Mystring[] = "Elizabeth";

	int l;

	for (l = 0; l >= 0; l++)
	{
		if (Mystring[l] == '\0')
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(Mystring[l]);

		}
	}
}
