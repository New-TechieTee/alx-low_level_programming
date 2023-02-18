#include <stdio.h>

/**
 * main - print noted alphabets
 *
 * Return: 0 when necessary
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	if (i != 'q' && i != 'e')
		putchar(i);
putchar('\n');
return (0);
}
