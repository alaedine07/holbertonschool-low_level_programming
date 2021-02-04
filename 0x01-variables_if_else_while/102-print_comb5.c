#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int i;
int j;
int x;
int z;

for (i = 0; i <= 9; ++i)
{
for (j = 0; j <= 8; ++j)
{
for (x = 0; x <= 9; ++x)
{
for (z = 0; z <= 9; ++z)
{
	putchar(48 + i);
	putchar(48 + j);
	putchar(' ');
	putchar(48 + x);
	putchar(48 + z);
}
if (j != '8' || z != '9')
{
	putchar(',');
	putchar(' ');

}
}
}
}

putchar('\n');
return (0);
}
