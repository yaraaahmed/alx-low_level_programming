#include "main.h"

/**
 * append_text_to_file - Appends text in end of file
 * @filename: A pointer to name
 * @text_content: string to add to the end
 * Return: If the function fails - -1
 *         If the file does not exist - -1, Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, o, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, ln);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
