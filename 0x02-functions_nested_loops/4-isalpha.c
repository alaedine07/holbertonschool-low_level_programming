#include "holberton.h"
/**
 * _isalpha - check alphan
 * @c : ascii int to check
 * Return: int
 *
 */
int _isalpha(int c)
{
	if (c >= 65  && c <= 90)
		return (1);
	if (c >= 97  && c <= 122)
		return (1);
	if (c >= 48  && c <= 57)
		return (1);
	else
		return (0);
}
