#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - entry point
 * print message new way
 * Return: Error
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, quote, strlen(quote));
	return (1);
}
