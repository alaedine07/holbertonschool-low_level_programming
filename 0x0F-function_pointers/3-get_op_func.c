#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * get_op_func - decide which function to call
 * @s: the operator
 * Return: pointer to which function to call
 **/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
    int i;

for (i = 0; i < 5; i++)
{
	if (ops.op == *s)
	{
		return (ops.f);
		break;
	}
}
return (NULL);
}