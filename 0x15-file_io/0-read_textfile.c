#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text to print
 * @filename: text file
 * @letters: number of letters
 * Return: w- actual number, fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bff;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	bff = malloc(sizeof(char) * letters);
	t = read(f, bff, letters);
	w = write(STDOUT_FILENO, bff, t);

	free(bff);
	close(f);
	return (w);
}
