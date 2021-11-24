#include "main.h"
/**
 * main - Copy the content of a file to another file.
 * @argc: number of arguments passed.
 * @argv: array of pointers to the arguments passed.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_from = 0, file_to = 0, file_read = 0;
	char buffer[1024];

	/* Check if number of arguments is correct */
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	/* Open _from and _to files */
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	/* Copy content */
	while ((file_read = read(file_from, buffer, 1024)) > 0)
	{
		if (write(file_to, buffer, file_read) != file_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (file_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Check if _from and _to files are closed correctly */
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
		
	return (0);
}
