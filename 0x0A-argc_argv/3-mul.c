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
	int n1, n2;

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	
	printf("%d\n", n1 * n2);
	return (0);
}
