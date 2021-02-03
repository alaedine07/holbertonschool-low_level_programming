#include <stdio.h>
/**
 * main - entry point
 * print size of var types
 * Return: Sucess
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of a int: %ld bytes(s)\n", sizeof(int));
	printf("Size of float: %ld bytes(s)\n", sizeof(long int));
	printf("Size of double: %ld bytes(s)\n", sizeof(long long int));
	return (0);
}
