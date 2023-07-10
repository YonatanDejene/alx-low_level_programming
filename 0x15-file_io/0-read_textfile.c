#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reades the text file and print to STDOUT
 * @filename: The text file to be read
 * @letters: a variable which holds how much of letters to be read
 * Return: w - number of bytes
 * 0 when error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffr;
	ssize_t frd;
	ssize_t wr;
	ssize_t tt;

	frd = open(filename, O_RDONLY);
	if (frd == -1)
		return (0);
	buffr = malloc(sizeof(char) * letters);
	tt = read(frd, buffr, letters);
	wr = write(STDOUT_FILENO, buffr, tt);

	free(buffr);
	close(frd);
	return (wr);
}
