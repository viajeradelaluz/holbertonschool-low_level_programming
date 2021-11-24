#include "main.h"
/**
 * append_text_to_file - Append text at the end of a file.
 * @filename: name of the file to append.
 * @text_content: string to append into the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_append = 0, _strlen = 0, file_write = 0;

	file_append = open(filename, O_WRONLY | O_APPEND);
	if (!filename || file_append == -1)
	{
		close(file_append);
		return (-1);
	}
	if (text_content)
	{
		while (text_content[_strlen])
			_strlen++;
		file_write = write(file_append, text_content, _strlen);
		if (!file_write)
			return (-1);
	}
	close(file_append);
	return (1);
}
