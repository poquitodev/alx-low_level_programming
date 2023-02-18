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

	for (i = 25; i >= 0; i--)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
