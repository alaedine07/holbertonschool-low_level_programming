#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random password generator for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
	int i, j;
	time_t t;
	int number, somme;
	char a[100];

	/* Intializes random number generator */
	srand((unsigned int) time(&t));
	number = 0;
	/* brute forcing the numbers */
	/* quit when somme of chars equal to 2772 */
	while (somme != 2772)
	{
		somme = 0;
		j = 0;
		/* try to sum of ascii of number */
		for (i = 2772; i >= 65; i -= number)
		{
			number = rand() % 58 + 65;
			somme = somme + number;
			a[j++] = number;
		}
	}
	a[j] = '\0';
	printf("%s\n", a);
	return (0);
}
