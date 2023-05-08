
#include "main.h"
/**
  * append_text_to_file - function that appends file
  * @text_content:- the content to append at end of file
  * @filename:- file to append to
  * Return:- Always 0
  */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *ptr;
	int text;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL || strlen(text_content) == 0)
	{
		text = open(filename, O_RDWR);
		if (text == -1)
		{
			close(text);
			return (-1);
		}
		close(text);
		return (1);

	}
	ptr = fopen(filename, "a");
	if (ptr == NULL)
		return (-1);
	text = fputs(text_content, ptr);
	if (text == -1)
	{
		return (-1);
	}
	fclose(ptr);
	return (1);

}
