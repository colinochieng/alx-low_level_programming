#include "main.h"

/**
*read_textfile - reads a text file and prints it to the POSIX standard output
*@filename: name of file to be read
*@letters:  number of letters it should read and print
*Return: the actual number of letters it could read and print
*if the file can not be opened or read, return 0
*if filename is NULL return 0
*if write fails or does not write the expected amount of bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count, print;
	int verify;
	char *buf;

	if (filename == NULL)
		return (0);

	verify = open(filename, O_RDONLY);

	if (verify == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		close(verify);
		return (0);
	}

	count = read(verify, buf, letters);
	close(verify);

	if (count == -1)
	{
		free(buf);
		return (0);
	}
	print = write(STDOUT_FILENO, buf, count);
	free(buf);
	if (print != count)
		return (0);

	return (print);
}
