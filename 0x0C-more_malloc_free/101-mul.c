#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int _atoi(char *s)
{
	unsigned int start, i, sign = 1, is_a_number, first_number, result = 0;

	first_number = 0;
	is_a_number = 0;
	i = 0;
	if (*s == '\0')
	{
		return (result);
	}
	while (is_a_number == 0)
	{
		if ((s[i] >= '0' && s[i] <= '9') && (*s != '\0'))
		{
			is_a_number = 1;
			first_number = i;
		}
		if (s[i] == '-')
		{
			sign = sign * -1;
			i = i + 1;
		}
		else
		i = i + 1;
	}
	start = first_number;
	while ((s[start] >= '0' && s[start] <= '9') && (*s != '\0'))
	{
		result = result * 10 + s[start] - '0';
		start++;
	}
	return (sign * result);
}

void my_print(int number)
{
	
}

int main(int argc, char **argv)
{
	int x = 0;
	int r;
	char *num1;
	char *num2;
	
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);	
	}
	num1 = argv[1];
	num2 = argv[2];
	x = verif_digit(num1);
	x = verif_digit(num2);
	if (x == 1)
	{
		printf("Error\n");
		exit(98);
	}
	r = atoi(argv[1]) * _atoi(argv[2]);
	my_print(r);
	return (0);
}