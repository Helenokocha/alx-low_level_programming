#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - append text at the end of file
 * @filename: filename
 * @text_content: add content
 *
 * Return: 1 if file exist, -1 if file does not exist
 * or if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	int nletters;

	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwr = write(fd, text_content, nletters);
		if (rwr == 1)
			return (-1);
	}
	close(fd);

	return  (1);
}
