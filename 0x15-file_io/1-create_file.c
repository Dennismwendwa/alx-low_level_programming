#include "main.h"

/**
  * create_file - Function that creates files
  * @filename:- pointer to the file
  * @text_content:- information to be writtern
  * Return:- Always 0 (success)
  */

int create_file(const char *filename, char *text_content)
{
	int createdfile;
	int size = 0;
	int begg;

	createdfile = open(filename, O_WRONLY | O_CREAT | S_IRUSR | S_IWUSR);
	if (createdfile == -1)
		return (-1);

	for (; text_content[size]; size++)
		;

	if (text_content == NULL)
	{
		close(createdfile);
		return (1);
	}

	begg = write(createdfile, text_content, size);
	if (close(createdfile) == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	return (begg == -1 ? -1 : 1);
}
