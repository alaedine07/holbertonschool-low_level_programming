#include <stdio.h>
/**
 * main - print fibonacci
 * fibonacci s
 * Return: always 0
*/
int main(void)
{
int i;
long int term_1, term_2, term_3;

term_1 = 1;
term_2 = 2;
i = 2;

printf("%ld, ", term_1);
printf("%ld, ", term_2);

do

{
i++;
term_3 = term_1 + term_2;
if (i == 50)
	printf("%ld\n", term_3);
else
printf("%ld, ", term_3);

term_1 = term_2;
term_2 = term_3;

} while (i < 50);
return (0);
}
