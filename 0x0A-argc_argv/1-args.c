#include <stdio.h>
#include <stdlib.h>

/**
 * main - start from here
 *
 * @argc: counts number of command line parameters
 * @argv: pointer of array of strings used in command line
 *
 * Return: 0 when succesful
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
