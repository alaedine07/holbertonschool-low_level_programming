#include <stdio.h>
#include "holberton.h"
/**
 * print_triangle - entry point
 * @size: triangle size
 * Return: Void
 */
void print_triangle(int size)
{	int i, j, k;
	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{	/*
		 * if it's the last line
		 */
		if (i == size)
		{
			for (j = 0; j < size; j++)
			{
				printf("#");
			}
		}
		else
		{	/*
			 * trying to print the _ in this loop
			 */
			for (j = size; j >= i + 1; j--)
			{
			printf(" ");
			}
			/*
			 * printing the # in this loop
			*/
			for (k = 1; k <= i; k++)
			{
			printf("#");
			}
		}
	printf("\n");
	}
	}
	else
	{
	printf("\n");
	}
}
