#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - converts parameters to string arguments.
 * @ac: number of arguments.
 * @av: pointer to array containing arguments.
 *
 * Return: new sting.
 */
char *argstostr(int ac, char **av)
{
	int q, r, s = 0, len = 0;
	char *news;

	if (ac == 0 || av == NULL)
		return (0);

	for (q = 0; q < ac; q++)
	{
		if (av[q] == 0)
			return (0);

		for (r = 0; av[q][r]; r++)
		{
			len++;
		}
		len++;
	}
	news = malloc((len + 1) * sizeof(char));

	if (news == 0)
		return (0);

	for (q = 0; av[q]; q++)
	{
		for (r = 0; av[q][r]; r++)
		{
			news[s] = av[q][r];
			s++;
		}
		news[s] = '\n';
		r = 0;
		s++;
	}
	s++;
	news[s] = '\0';

	return (news);
}
