#include "holberton.h"
/**
* _strcmp - compare bytes of a string
* @s1: The destination string
* @s2: source string.
* Return: int.
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int same = 0;
	int res = 0;

	while (same == 0 && *(s1 + i) && *(s2 + i))
	{
		if (*(s1 + i) != *(s2 + i))
		{
			same = 1;
		}
		else
		{
			i++;
		}
	}
	if (same == 0)
	{
		return (res);
	}
	else
	{
		res = *(s1 + i) - *(s2 + i);
	}
	return (res);
}
