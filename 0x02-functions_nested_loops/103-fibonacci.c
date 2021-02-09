#include <stdio.h>
/**
 * main - print fibonacci
 *
 * Return: always 0
*/
int main(void)
{

long int term_1, term_2, term_3, sum;

term_1 = 1;
term_2 = 2;
sum = 2;

do

{
term_3 = term_1 + term_2;
if ((term_3 % 2) == 0)
	sum = sum + term_3;


term_1 = term_2;
term_2 = term_3;
} while (sum < 4000000);
printf("%ld\n", sum);
return (0);
}
