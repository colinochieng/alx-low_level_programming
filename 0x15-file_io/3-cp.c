#include "main.h"

/**
*close_file - closes file
*@fd: the value of the file descriptor
*Return: void
*/

void close_file(int fd)
{
	int shut = close(fd);

	if (shut == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
*main - a program that copies the content of a file to another file
*@argc: number of arguments
*@argv: array of argument
*Return: 0
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, note, scan;
	char buf[1024];

/*if the number of argument is not the correct one*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
/*if file_from does not exist*/
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
/*if file_to already exists, truncate it*/
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
/*if you can not create file_to*/
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	scan = read(file_from, buf, 1024);

	while (scan > 0)
	{
		note = write(file_to, buf, scan);
		/*if write to file_to fails*/
		if (note != scan)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	close_file(file_from);
	close_file(file_to);

	return (0);
}
