#include "main.h"

/**
 * create_file - Creates the desired file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer that points to a string to write to the file.
 *
 * Return: If error: -1.
 *         else: 1.
 */
int create_file(const char *filename, char *text_content)
{
	int wr, length = 0, frd;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	frd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(frd, text_content, length);

	if (frd == -1 || wr == -1)
		return (-1);

	close(frd);

	return (1);
}

