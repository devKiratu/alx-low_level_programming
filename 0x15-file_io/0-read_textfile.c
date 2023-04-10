#include "main.h"

/**
 * read_textfile - reads a text file and prints it out to the stdout
 * @filename: pointer to file to be read
 * @letters: number of letters to read and print
 * Return: actual number of letters it could read and print,
 * or 0 if filename is NULL, read/write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r_bytes, wr_bytes;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	r_bytes = read(fd, buf, letters);
	if (r_bytes == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	wr_bytes = write(STDOUT_FILENO, buf, r_bytes);
	if (wr_bytes == -1 || wr_bytes != r_bytes)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (wr_bytes);
}
