#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: depends
 * TODO:  check if atoi return correct
 **/
int main(int argc, char **argv)
{
	int x, y;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	result = (*get_op_func(char argv[2]))(x, y);

	return (0);
}
