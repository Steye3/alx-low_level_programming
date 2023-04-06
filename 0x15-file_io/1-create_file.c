#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a text.
 *
 * @filename: name of the text file.
 * @text_content: a pointer to the name of the file.
 *
 * Returns: 1 if success and -1 on failure.
 */
 
int create_file(const char *filename, char *text_content)
{
	int op, wr, len;

	len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
