#include "main.h"

/**
 * main - entry point - copies content rom one file to another
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0 success,
 * 97 - wrong number of arguments
 * 98 - source file does not exist or can't be read
 * 99 - destination file cannot be created or written to
 * 100 - source/destination file cannot be closed
 */
int main(int argc, char *argv[])
{
	int bytes_r, bytes_w, fdr, fdw, o_flags, permissions;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	o_flags = O_WRONLY | O_CREAT | O_TRUNC;
	permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fdr = open(argv[1], O_RDONLY);
	fdw = open(argv[2], o_flags, permissions);

	while (1)
	{
		bytes_r = read(fdr, buf, 1024);
		if (bytes_r <= 0)
			break;

		if (argv[1] == NULL || fdr == -1 || bytes_r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		bytes_w = write(fdw, buf, bytes_r);
		if (argv[2] == NULL || fdw == -1 || bytes_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	close_file(fdr);
	close_file(fdw);
	return (0);
}

/**
 * close_file - closes an open file
 * @fd: file descriptor
 * Return: void
 */
void close_file(int fd)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
