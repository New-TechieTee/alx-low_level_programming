#include <stdio.h>

/**
 * main - print all numbers in base ten
 *
 * Return: 0 when necessary
 */

int main(void)
{
int i;

for (i = '0' ; i <= '9' ; i++)
	printf("%d", i);
printf("\n");
return (0);
}
