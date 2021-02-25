#include "holberton.h"
/**
* search - search square root
* @n: argument 1
* @sqrt: argument 2
* @temp: argument 3
* Return: int
*/
int search(int n, float sqrt, float temp)
{
	if (sqrt == temp)
	{
		return (sqrt);
	}
	temp = sqrt;
	return (search(n, ((n / temp + temp) / 2), temp));

}




/**
* _sqrt_recursion - natural square root
* @n: argument 1
* Return: int
*/
int _sqrt_recursion(int n)
{
	float temp, sqrt;
	int result;

	sqrt = n / 2;
	temp = 0;
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	result = search(n, sqrt, temp);
	if ((result * result) != n)
	{
		return (-1);
	}
	return (result);
}
