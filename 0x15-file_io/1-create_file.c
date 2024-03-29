#include "main.h"

/**
 * create_file - creates a file if it doesn't exist, writes @text_content to it
 * @filename: name of the file to be created
 * @text_content: text to write to the created file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, status, o_flags, permissions;

	o_flags = O_WRONLY | O_CREAT | O_TRUNC;
	permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, o_flags, permissions);
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
