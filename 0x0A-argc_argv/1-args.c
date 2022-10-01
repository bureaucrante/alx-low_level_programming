#include <stdio.h>

/**
 * main - prints the number of arguments passed into program
 * @argc: argument count
 * @argv: argument pointer array
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
