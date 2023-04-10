#include "main.h"

/**
  * read_textfile - Function that reads files
  * @filename:- pointer to the file to read from
  * @letters:- number of bytes to read
  * Return:- Always 0 (success)
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int count = 0;
	int kusoma = 1;
	int fl;
	char ch[SIZE];


	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);

	while (kusoma != 0 && letters > SIZE)
	{
		kusoma = read(fl, ch, SIZE);
		write(STDOUT_FILENO, ch, kusoma);
		count = count + kusoma;
		letters = letters - SIZE;
	}
	kusoma = read(fl, ch, letters);
	write(STDOUT_FILENO, ch, kusoma);
	count = count + kusoma;
	close(fl);

	if (filename == NULL)
		return (0);


	return (count);
}
