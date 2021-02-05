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
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if ((i != '9') || (j != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
