#include "main.h"

/**
 * append_text_to_file - crreate a file
 * @filename: file to be created
 * @text_content: string to be added to file
 * Return: 1 if successful -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	/* Declare variables to be used */
	int fd, i = 0;
	/* setting requirements */
	if (!filename)
		return (-1);
	if (!filename && !text_content)
		return (-1);
	if (filename && !text_content)
		return (1);
	/* open the file and start appending */
	fd = open(filename,  O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	/* get length of text content */
	while (text_content[i] != '\0')
		i++;
	/* now we write to the file */
	write(fd, text_content, i);
	close(fd);
	return (1);
}
