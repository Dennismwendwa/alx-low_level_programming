
#include "main.h"

/**
  * create_file - function that creates file
  * @text_content:- file to create
  * @filename:- content to be written in file
  * Return:- Always 0
  */

int create_file(const char *filename, char *text_content)
{
	int length, of, wf;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		of = open(filename, O_CREAT, 0600);
		if (of == -1)
			return (-1);
		close(of);
		return (1);
	}
	length = strlen(text_content);
	of = open(filename, O_TRUNC | O_RDWR | O_CREAT, 0600);

	if (of == -1)
		return (-1);
	wf = write(of, text_content, length);
	if (wf == -1)
		return (-1);
	close(of);
	return (1);

}
