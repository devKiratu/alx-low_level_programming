#include "main.h"

/**
 * append_text_to_file - appends @text_content to @filename
 * @filename: name of file to append text to
 * @text_content: text to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status, o_flags;

	o_flags = O_WRONLY | O_APPEND;

	if (filename == NULL)
		return (-1);

	fd = open(filename, o_flags);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		status = write(fd, text_content, strlen(text_content));
		if (status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
