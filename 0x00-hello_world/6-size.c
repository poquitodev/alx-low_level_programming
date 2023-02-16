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
       float e = sizeof(float);	
	printf("Size of a char: %d byte(s\n)",a);
	printf("Size of an int: %d byte(s)\n",b);
	printf("Size of a long int: %d byte(s)\n",c);
	printf("Size of a long long int: %d byte(s)\n",d);
	printf("Size of a float: %d byte(s)\n",e);

	return (0);
}
