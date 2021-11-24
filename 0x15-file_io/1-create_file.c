#include "main.h"
/**
 * create_file - Create a file.
 * @filename: name of the file to create.
 * @text_content: string to write into the file.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_creat = 0, _strlen = 0, file_write = 0;

	file_creat = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!filename || file_creat == -1)
	{
		close(file_creat);
		return (-1);
	}
	if (!text_content)
		text_content = "";
	else
	{
		while (text_content[_strlen])
			_strlen++;
		file_write = write(file_creat, text_content, _strlen);
		if (file_write == -1)
			return (-1);
	}
	close(file_creat);
	return (1);
}
