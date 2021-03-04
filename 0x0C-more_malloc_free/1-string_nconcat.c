#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _getlength - allocate memory and add
 * @str: str
 * Return: int
 **/
int _getlength(char *str)
{
	int  i;
	int l = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}
	return (l);
}
/**
 * *string_nconcat - allocate memory and add
 * @s1: param1
 * @s2: param2
 * @n: param3
 * Return: void pointer
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2;
	char *p;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l1 = _getlength(s1);
	l2 = _getlength(s2);
	if (n > l2)
	{
		n = l2;
	}
	else
	{
		l2 = n;
	}
	p = malloc((l1 + l2 + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j <= l2; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}
