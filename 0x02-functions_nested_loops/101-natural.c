#include <stdio.h>
#include <stdio.h>
/**
 * main - entry point
 * natural
 * Return: Sucess
 */
int main(void)
{
	int sum, i;

	sum = 23;
	i = 10;
	do

	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
		i++;
	} while (i < 1024);
	printf("%d\n", sum);
	return (0);
}
