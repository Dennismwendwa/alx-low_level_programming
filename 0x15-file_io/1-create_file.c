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
	ssize_t size = -1;
	int len = strlen(text_content);

	if (!filename)
		return (-1);

	createdfile = open(filename, O_CREAT | O_WRONLY |  O_TRUNC, 0600);
	if (createdfile == -1)
		return (-1);

	if (text_content != NULL)
	{
		size = write(createdfile, text_content, len);
	}
	else
		return (1);

	close(createdfile);

	return ((size != -1) ? 1 : -1);
}
