#include <stdio.h>
#include <stdlib.h>

/**
 * main: Entry point
 *
 * @argc: counts the number of command line arguments in main
 * @argv: points to the array of parameters that go into main
 *
 * Return: 0 when necessary
 */

int main(int argc, char **argv)
{
	if (argc > 0)
	printf("%s\n", argv[0]);
	return (0);
}
