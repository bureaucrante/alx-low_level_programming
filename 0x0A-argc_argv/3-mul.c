#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two int arguments
 * @argc: cmd line argument count
 * @argv: argument array
 *
 * Return: 0 for success, 1 for failure.
 */

int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;

	printf("%d\n", mul);
	return (0);
}
