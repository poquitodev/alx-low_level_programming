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
char c[26] = "abcdefghijklmnopqrstuvwxyz";
char d[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

for (i = 0; i < 26; i++)
{
putchar(c[i]);
}
for (j = 0; j < 26; j++)
{
putchar(d[j]);
}
putchar('\n');
return (0);
}
