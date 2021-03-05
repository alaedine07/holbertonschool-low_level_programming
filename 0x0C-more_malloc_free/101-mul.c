#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * verif_digit - verify if str contain only digit
 * @str: param1
 * Return: true or false
 **/
int verif_digit(char *str)
{
	int i = 0;
	if (str[0] == '-')
	{
		i++;
	}
	for (; str[i] != '\0'; i++)
	{	/* verif if the argument cotain a !digit */
		if (str[i] < '0' || str[i] > '9')
		{
			return (1);
		}
	}
	return (0);
}
/**
 * len - calculate number length (number of digits).
 * @p: pointer to char.
 * Return: length.
 */
int len(char *p)
{
	int len = 0;

	while (p[len] != '\0')
		len++;
	return (len);
}
/**
 * do_works - allocates the 2D array.
 * @rows: number of rows.
 * @heigher: first iteration.
 * @lower: second iteration.
 * Return: always Success.
 */
int **do_work(int rows, char *heigher, char *lower)
{
	int **array = malloc(rows * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < rows; i++)
	{
		int array[i] = malloc((len(heigher)) * sizeof(int) + (i + 1));
		if (array[i] == NULL)
		{
			free(allo[i]);
			return (NULL);
		}
	}
	for (j = len(heigher); j >= 0 ; j--)
	{
		for (h = len(lower); h >= 0; h)
	}
	return (arr);
}
/**
 * main - entry point.
 * @argc: number of arguments.
 * Return: always Success.
 */
int main(int argc, char **argv)
{
	int x = 0;
	int r, l1, l2, rows;
	char *heigher;
	char *lower;
	int **final; 
	
	if (argc != 3 || verif_digit(argv[1]) == 1 || verif_digit(argv[2]) == 1)
	{
		printf("Error\n");
		exit(98);	
	} 
	l1 = len(argv[1]);
	l2 = len(argv[2]);
	if (l1 >= l2)
	{
		rows = l2;
		heigher = argv[1];
		lower = argv[2];
	}
	else
	{
		rows = l1;
		heigher = argv[2];
		lower = argv[1];
	}
	final_ar = do_work(rows, heigher, lower); 
	return (0);
}