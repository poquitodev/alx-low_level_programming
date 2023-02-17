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

	for (i = 48; i < 58; i++)
	{
		if (i != 57)
		{
		putchar(i);
		putchar(',');
		putchar(' ');
		}
		if (i == 57)
		{
			putchar(i);
		}
	}
	return (0);
}
