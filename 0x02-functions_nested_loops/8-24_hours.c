#include "holberton.h"
/**
 * jack_bauer - print minutes and seconds
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{	/* this instructions will add the value of i to the ascii of 0
			 * which will result into printing i itself
			 * because _putchar only prints ascii not chars
			 */
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
