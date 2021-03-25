#include "holberton.h"
#include <stdio.h>
/**
* get_bit - returns value of a bit at a given index
* @n: given integer
* @index: index to return value of bit
* Return: value of bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
