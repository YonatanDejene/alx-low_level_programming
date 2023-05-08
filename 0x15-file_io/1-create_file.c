#include "main.h"

/**
 * create_file - Creates a file with a given filename and content
 * @filename: Name of the file to be created.
 * @text_content: Contents to be in the file.
 *
 * Return: 1 if it success, -1 if it is not.
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	int n_letters;
	int r_w_r;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n_letters = 0; text_content[n_letters]; n_letters++)
		;

	r_w_r = write(f, text_content, n_letters);

	if (r_w_r == -1)
		return (-1);

	close(f);

	return (1);
}
