#include "main.h"

/**
*create_file - function that creates a file
*@filename: the name of the file to create
*@text_content: is a NULL terminated string to write to the file
*Return: 1 on success, -1 on failure
* if (file can not be created, file can not be written,
*write “fails”, etc…)
*The created file must have those permissions: rw-------.
*If the file already exists, do not change the permissions.
*if the file already exists, truncate it
*if filename is NULL return -1
*if text_content is NULL create an empty file
*/
int create_file(const char *filename, char *text_content)
{
	int fd, len, fail;

	if (filename == NULL)
		return (-1);

	fd = open(filename, 01101, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (len = 0; text_content[len] != '\0'; len++)
		;

	fail = write(fd, text_content, len);

	if (fail == -1)
		return (-1);

	close(fd);
	return (1);
}
