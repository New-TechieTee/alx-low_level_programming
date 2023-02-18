#include <stdio.h>

/**
 * main - run finction as needed
 *
 * Return: 0 when neede
 */

int main(void)
{
int i;
char j;
for (i = 0 ; i < 10 ; i++)
	putchar(i + '0');
for (j = 'a' ; j <= 'f' ; j++)
	putchar(j);
putchar('\n');
return (0);
}
