#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two numbers
 * @argc: arguments count
 * @argv: array of passed arguments
 *
 * Return: 0 for success, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
