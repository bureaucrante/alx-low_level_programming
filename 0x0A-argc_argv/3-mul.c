#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two int arguments
 * @argc: we know by now
 * @argv: same as above
 *
 * Return: 0 for success, 1 for failure. 
 */

int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;
	int mul = 0;


	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mul = n1 * n2;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
