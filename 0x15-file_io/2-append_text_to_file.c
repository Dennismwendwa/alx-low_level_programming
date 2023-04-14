#include "main.h"

/**
  * append_text_to_file - Function that appends text at the end
  * @text_content:- contented to append
  * @filename:- file to append to
  * Return:- Always 0 (success)
  */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *createdfile;
	int size;

	if (filename == NULL)
		return (-1);

	if (!text_content || strlen(text_content) == 0)
	{
		size = open(filename, O_RDWR);
		if (size == -1)
		{
			close(size);
			return (-1);
		}
		close(size);
		return (1);
	}
	createdfile = fopen(filename, "a");
	if (!createdfile)
		return (-1);
	size = fputs(text_content, createdfile);
	if (size == -1)
		return (-1);
	fclose(createdfile);
	return (1);
}
