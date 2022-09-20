#include <string.h>
#include <stdio.h>

int main()
{
	char Mystring[] = "Elizabeth";

	int n, l, temp;

	l = strlen(Mystring);

	/*printf("length of string: %d\n", l);*/

	for (n = 0; n < (l/2); n++)
	{
		temp = Mystring[n];

		Mystring[n] = Mystring[l - 1 - n];

		Mystring[l - 1 - n] = temp;
	}
	printf("%s\n", Mystring);
}
