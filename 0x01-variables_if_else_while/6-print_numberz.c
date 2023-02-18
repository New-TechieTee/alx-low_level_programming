#include <stdio.h>

/**
 * main - run function and print numbers
 *
 * Return: 0 when necessary
 */

int main(void)
{
int i;

for (i = 0 ; i < 10 ; i++)
	putchar(i + '0');
putchar('\n');
return (0);
}
