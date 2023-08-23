#include "main.h"

/**
 * append_text_to_file - Appends a text found a end of a file.
 * @filename: A pointer.
 * @text_content: The string to be added.
 *
 * Return: If the function fails : -1.
 *         If the file does not exist: -1.
 *         Else: 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, length);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
