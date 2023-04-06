#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 *	      	   standard output.
 *
 * @filename: name of the text file.
 * @letters: The number of letters the function will read and print.
 *
 * Returns: The number of letters.
 */
 
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t op, re, wr;

	if (filename == NULL)
		return 0;

	buffer = malloc(sizeof(size_t) * letters);
	if (buffer == NULL)
		return 0;

	op = open(filename, O_RDWR);
	re = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	if (op == -1 || re == -1 || wr != re)
	{
		free(buffer);
		return 0;
	}

	free(buffer);
	close(op);

	return (wr);
}
