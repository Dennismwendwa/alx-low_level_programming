#include "main.h"

/**
  * append_text_to_file - Function that appends text at the end
  * @text_content:- contented to append
  * @filename:- file to append to
  * Return:- Always 0 (success)
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int createdfile;
	int size = 0;
	int begg;

	if (filename == NULL)
		return (-1);

	createdfile = open(filename, O_WRONLY | O_APPEND);
	if (text_content == NULL)
		return (-1);
	if (createdfile == -1)
		return (-1);

	for (; text_content[size]; size++)
		;
	begg = (write(createdfile, text_content, size));
	close(createdfile);

	return (begg == -1 ? -1 : 1);
}
