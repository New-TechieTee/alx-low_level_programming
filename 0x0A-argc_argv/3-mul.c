#include <stdio.h>
#include <stdlib.h>

/**
 * main - start now
 *
 * @argc: counts the number of command line languages
 * @argv: pointer of string arrays.
 *
 * Return: 0 when necessary
 */
int main(int argc, char **argv)

	int a,


	ex = 0;
	if (argc != 3)
{
	printf("%s\n", "Error");
	ex = 1;
}
else
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", a);
	}
	return (ex);
