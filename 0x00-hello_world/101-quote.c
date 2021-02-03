#include <unistd.h>
/**
 * main - entry point
 * display message new way
 * Return: Error
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";

	write(2, quote, 0x3a);
	return (2);
}
