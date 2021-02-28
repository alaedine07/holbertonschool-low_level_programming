#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: the arguments
 * Return: always success
 */
int main(int argc, char **argv)
{
	int coins[5] = {25, 10, 5, 2, 1};
	int occ, i, cents;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
		occ = 0;
	else
	{
		occ = 0;
		while (cents != 0)
		{	/* checking if cents already exists in coins table */
			for (i = 0; i < 5; i++)
			{
				if (coins[i] == cents)
				{
					cents = cents - coins[i];
					occ++;
					break;
				}
			}
			if (cents != 0)
			{
				i = 0;
				while (cents > 0)
				{
					if (coins[i] <= cents)
					{
						cents = cents - coins[i];
						occ++;
					}
					else
						i++;
				}
			}
		}
	}
printf("%d\n", occ);
return (0);
}
