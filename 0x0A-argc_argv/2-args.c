#include <stdio.h>
#include <stdlib.h>
/**
 * main - start point
 *
 * @argc: counts the number of command lines that go into main
 * @argv: pointer of arrays of poinyers containing strings entering main
 *
 * Return: 0 when necessary
 */

int main(int argc, char *argv[])
{
	int a;

	if (argc > 0)
	{
		for (a = 0; a < argc; a++)
		{
			printf("%s\n", argv[a]);
		}
	}
	return (0);
}
