#include "holberton.h"
/**
* leet - copie n bytes of a string
* @s: The destination string
* Return: s.
*/
char *leet(char *s)
{
	int i = 0;
	int j;
	char a[] = {'A', 'E', 'O', 'T', 'L'};
	char b[] = {'a', 'e', 'o', 't', 'l'};
	char l[] = {'4', '3', '0', '7', '1'};

	while (*(s + i))
	{
		for (j = 0; j <= 5; j++)
		{
			if (a[j] == *(s + i) || b[j] == *(s + i))
			{
				*(s + i) = l[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
