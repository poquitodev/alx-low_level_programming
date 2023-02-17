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
	int j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
