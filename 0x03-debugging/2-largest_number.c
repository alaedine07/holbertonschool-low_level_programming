#include "holberton.h"

/**
<<<<<<< HEAD
 * largest_number - returns the largest of 3 numbers
=======
 * largest_number - returns the largest out of 3 numbers
>>>>>>> a06c69b939cc53ce24ada8c8f978ce8895586c63
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
<<<<<<< HEAD
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
=======
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
>>>>>>> a06c69b939cc53ce24ada8c8f978ce8895586c63
}
