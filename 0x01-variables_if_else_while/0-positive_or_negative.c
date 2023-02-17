#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: A C program that check if the number is - + or zero
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		puts("is positive");
	}
	if (n == 0)
	{
		puts("is zero");
	}
	else
	{
		puts("is negative");
	}
	return (0);
}
