#include "main.h"

/**
 * create_file - crreate a file
 * @filename: file to be created
 * @text_content: string to be added to file
 * Return: 1 if successful -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	/* Declare variables to be used */
	int fd, i = 0;
	/* set requirements */
	if (!filename)
		return (-1);
	/* open the file and create if not there */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		/* loop through and get length of string */
		while (text_content[i] != '\0')
			i++;
		/* write to the file */
		write(fd, text_content, i);
	}
	close(fd);
	return (1);
}
