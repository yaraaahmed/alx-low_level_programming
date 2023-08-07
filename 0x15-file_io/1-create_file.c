#include "main.h"

/**
 * create_file - Create file
 * @filename: A pointer name
 * @text_content: pointer to string
 * Return: If the function fails - -1, Otherwise - 1
*/
int create_file(const char *filename, char *text_content)
{
	int w, f, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(f, text_content, ln);

	if (f == -1 || w == -1)
		return (-1);

	close(f);

	return (1);
}
