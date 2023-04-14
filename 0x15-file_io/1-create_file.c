#include "main.h"

/**
  * create_file - Function that creates files
  * @filename:- pointer to the file
  * @text_content:- information to be writtern
  * Return:- Always 0 (success)
  */

int create_file(const char *filename, char *text_content)
{
	ssize_t createdfile;
	ssize_t size;
	int len;

	if (!filename)
		return (-1);

	if (text_content == NULL)
	{
		createdfile = open(filename, O_CREAT, 0600);
		if (createdfile == -1)
			return (-1);
		close(createdfile);
		return (1);
	}
	len = strlen(text_content);
	createdfile = open(filename, O_TRUNC | O_RDWR | O_CREAT, 0600);

	if (createdfile == -1)
		return (-1);

	size = write(createdfile, text_content, len);
	if (size == -1)
		return (-1);

	close(createdfile);

	return (1);
}
