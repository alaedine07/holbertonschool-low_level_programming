#include "holberton.h"
/**
 * create_file - create or recreate file if exits
 * @filename: name of file to be created
 * @text_content: content to add on the file
 * Return: success
**/
int create_file(const char *filename, char *text_content)
{
	int fd, w, i;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			len++;
		}
	}
	/* opening the files with create-read-write-truncate mode */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);
	if (fd || w)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
