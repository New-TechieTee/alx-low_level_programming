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
{
	int num1, num2, mul;

	if (argc !=3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d/n", mul);
	}
	return (0);
}	
