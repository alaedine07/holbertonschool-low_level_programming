#include "holberton.h"
#define BUF_SIZE 1024
/**
 * copy_func - copies from file to file
 * @arg_1: the destination file
 * @arg_2: the source file
 * Return: integer
*/
int copy_func(char *arg_1, char *arg_2)
{
	int file_from, file_to, r, w, c;
	char buffer[BUF_SIZE];

	file_from = open(arg_1, O_RDWR);
	if (file_from < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", arg_1);
		exit(98);
	}
	file_to = open(arg_2, O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (file_to < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", arg_2);
		exit(99);
	}
	r = 1024;
	while (r == 1024)
	{
		r = read(file_from, buffer, 1024);
		if (r < 0)
		{
			dprintf(2, "Error: Can't read from file %s\n", arg_1);
			exit(98);
		}
		w = write(file_to, buffer, r);
		if (w < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", arg_2);
			exit(99);
		}
	}
	c = close(file_from);
	if (c < 0)
		return (c);
	c = close(file_to);
	if (c < 0)
		return (c);
	return (0);
}
/**
 * main - the main function
 * @argc: the argument count
 * @argv: the argument vector
 * Return: always 0
*/
int main(int argc, char **argv)
{
	int exit_code = 1;
	/* check number of arguments */
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	exit_code = copy_func(argv[1], argv[2]);
	switch (exit_code)
	{
		case (98):
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		case (99):
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		case (100):
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", exit_code);
			exit(100);
		default:
			return (0);
	}
	return (exit_code);
}
