#include <stdio.h>

/**
 * main - writes in upper and lower case
 *
 * Return: 0 when necessary
 */

int main(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
	putchar(i);
for (i = 'A' ; i <= 'Z' ; i++)
	putchar(i);
putchar('\n');
return (0);
}
