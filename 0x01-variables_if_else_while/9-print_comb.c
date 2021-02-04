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

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
