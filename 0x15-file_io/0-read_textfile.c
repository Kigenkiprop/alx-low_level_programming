#include "main.h"

/**
 * read_textfile - Read a text and file and prints it to the stdout
 * @filename: Name of the file
 * @letters: Number of letters to read
 * Return: Actual number of letters printed and read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	ssize_t n_read, n_wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* Open file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* malloc buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* read */
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write */
	n_wrote = write(STDOUT_FILENO, buffer, n_read);
		if (n_wrote == -1)
		{
			free(buffer);
			close(fd);
			return (0);
		}
	close(fd);
	return (n_read);
}
