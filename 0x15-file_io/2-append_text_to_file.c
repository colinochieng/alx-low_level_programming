#include "main.h"

/**
*append_text_to_file - function that appends text at the end of a file.
*@filename: name of the file
*@text_content: NULL terminated string to add at the end of the file
*Return: 1 on success and -1 on failure
*Do not create the file if it does not exist
*If filename is NULL return -1
*If text_content is NULL, do not add anything to the file.
*Returns 1 if the file exists and -1
*if the file does not exist or
*if you do not have the required permissions to write the file
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, verify, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;

		verify = write(fd, text_content, len);

		if (verify < 0)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
