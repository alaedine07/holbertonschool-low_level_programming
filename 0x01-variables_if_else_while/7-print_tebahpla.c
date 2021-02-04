#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * display message new way
 * Return: Sucess
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
