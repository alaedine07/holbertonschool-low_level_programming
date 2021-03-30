#include "holberton.h"
#define BUF_SIZE 1024

int main(int argc, char **argv)
{
	int r, file_from, file_to, w;
	char buffer[BUF_SIZE];
	/* check number of arguments */
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* if file from does not exists */
	file_from = open(argv[1], O_RDWR);
	if (file_from < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);	
	}
	/* open or create file_to and check for error */
	file_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (file_to < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	/* read file_from and check for error */
	r = 1024;
	while (r == 1024)
	{
		r = read(file_from, buffer, 1024);
		if (r < 0)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);	
		}
		w = write(file_to, buffer, r);
		if (w < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}	
	}
	close(file_from);
	close(file_to);
	return (1);
}