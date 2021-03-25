#include "holberton.h"
#include <stdlib.h>
/**
* print_binary - convert binary to decimal.
* @n: string
* Return: result.
**/
void print_binary(unsigned long int n)
{
	int r = 0;

	if (n == 0)
	{
		printf("0");
	}
	while (n != 0)
	{
		r = n & 1;
		if (r == 0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
		n = n >> 1;
	}
}
