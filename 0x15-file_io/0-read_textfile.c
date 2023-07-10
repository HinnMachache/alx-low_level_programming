#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fD;
	ssize_t outPut;
	ssize_t t;

	fD = open(filename, O_RDONLY);
	if (fD == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fD, buf, letters);
	outPut = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fD);
	return (outPut);
}
