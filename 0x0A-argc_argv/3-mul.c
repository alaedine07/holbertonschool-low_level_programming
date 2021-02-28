#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: the arguments
 * Return: always success
 */
int main(int argc, char **argv)
{
int i, s;

if (argc <= 2)
{
	printf("Error\n");
}
else
{
	s = 1;
	for (i = 1; i < argc; i++)
	{
		s = s * atoi(argv[i]);
	}
	printf("%d\n", s);
}
return (0);
}

