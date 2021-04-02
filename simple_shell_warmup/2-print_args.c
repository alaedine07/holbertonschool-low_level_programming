#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * this function print all the arguments on argv without relying on argc
 * Return: Always 0.
 **/
int main(int argc, char **argv)
{
	int i = 1;
	while (*(argv + i))
	{
		printf("%s\n", *(argv + i));
		i++;
	}
	return (0);
}