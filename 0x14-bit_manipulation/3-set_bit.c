#include "holberton.h"
#include <stdlib.h>
/**
* set_bit - sets value of a bit to 1 at given index
* @n: pointer to string n
* @index: starts from 0 of the bit to set
* Return: 1 on success; -1 on fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n = (1 << index) | *n;
	return (1);
}
