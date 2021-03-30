#include "holberton.h"
/**
 * read_textfile - read letters from text file
 * @filename: filename
 * @letters: number of letters to count
 * Return: number of written bytes
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	/* allocate buffer from number of letters */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r < 0)
	{
		free(buffer);
		return (0);
	}
	else
	{
		w = write(STDOUT_FILENO, buffer, r);
		if (w < 0)
		{
			free(buffer);
			return (0);
		}
	}
	free(buffer);
	close(fd);
	return (w);
}
