#include "holberton.h"
/**
 * rot13 - encode a string using rot13
 * @s: string.
 * Return: string.
 */
char *rot13(char *s)
{
	int i = 0;
	int j;
	char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(s + i) != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (*(s + i) == normal[j])
			{
				*(s + i) = rotated[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
