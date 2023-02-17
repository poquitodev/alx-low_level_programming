#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the alphabet
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char c[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (c[i] != 'q' && c[i] != 'e')
		{
			putchar(c[i]);
		}
	}
	putchar('\n');
	return (0);
}
