#include "main.h"
#include <stdio.h>

/**
 * main - prints its own name
 * @argc: number of arguments passed into main
 * @argv: array of arguments passed into main
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{

	printf("my name is: %s\n", argv[0]);

	return (0);
}
