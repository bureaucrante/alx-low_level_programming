#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "Elizabeth";
	char s2[] = "Elizobeth";

	int l = strcmp(s1, s2);

	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			printf("%d\n", (s1[i] - s2[i]));
			break;
		}
	}

//	if (warning == 1)
//	{
//	}

	printf("%d\n", l);

	return (0);
}
