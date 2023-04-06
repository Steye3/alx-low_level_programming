#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Adds text to an existing file.
 *
 * @filename: name of the text file.
 * @text_content: a pointer to the name of the file.
 *
 * Returns: 1 if success and -1 on failure.
 */
 
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t op, ap;
	size_t len;

	len = 0;
	
	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		while (text_content[len]);
		len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	ap = write(op, text_content, len);
	
	if (op == -1 || ap == -1)
		return (-1);

	close(op);

	return (1);
}
