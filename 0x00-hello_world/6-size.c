#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char a = sizeof("a");
	int b = sizeof(1);
	int c = sizeof(2147483647);
	long d = sizeof(9223372036854775807);
       float e = sizeof(1.0);	
	printf("Size of a char: %d byte(s)",a);
	printf("Size of an int: %d byte(s)",b);
	printf("Size of a long int: %d byte(s)",c);
	printf("Size of a long long int: %d byte(s)",d);
	printf("Size of a float: %d byte(s)",e);

	return (0);
}
