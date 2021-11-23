#include "main.h"
/**
 * read_textfile - Read and print a text file.
 * @filename: file to be opened.
 * @letters: letters to read and print.
 * Return: the number of letters readed and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(buffer) * letters);
	ssize_t letters_read = 0, letters_write = 0;

	if (!buffer || fd == -1 || !filename)
	{
		close(fd);
		return (0);
	}
	letters_read = read(fd, buffer, letters);
	if (letters_read == -1)
	{
		free(buffer);
		return (0);
	}
	letters_write = write(STDOUT_FILENO, buffer, letters_read);
	if (letters_write == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (letters_write);
}
