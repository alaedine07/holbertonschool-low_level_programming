#include "holberton.h"
/**
 * append_text_to_file - append to text file
 * @filename: name of file to be created
 * @text_content: content to add on the file
 * Return: depends on errors
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd, w;
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
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);

	if (fd < 0 || w < 0)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
