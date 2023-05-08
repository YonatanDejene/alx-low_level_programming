#include "main.h"

/**
 * read_textfile - Reads text file.
 * @filename: Filename.
 * @letters: Numbers of letters to be printed from the given file.
 *
 * Return: Numb of letters printed. Or returns 0 if unsuccessful.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t n_read, n_write;
	char *buff;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	n_read = read(f, buff, letters);
	n_write = write(STDOUT_FILENO, buff, n_read);

	close(f);

	free(buff);

	return (n_write);
}
