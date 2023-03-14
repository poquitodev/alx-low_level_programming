#include <stdlib.h>
#include "main.h"

/**
 * argstostr - splits a string into words
 *
 * @ac: argument count
 * @av: array of argument values
 *
 * Return: a pointer to an array of strings
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int count = 0, a = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			count++;
			b++;
		}
		a++;
	}

	count = count + ac + 1;
	str = malloc(sizeof(char) * count);

	if (str == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
