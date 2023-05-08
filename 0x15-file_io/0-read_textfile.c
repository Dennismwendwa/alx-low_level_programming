
#include "main.h"

/**
  * read_textfile - function that reads file
  * @filename:- file to read
  * @letters:- amount of chars to read and print
  * Return:- Always 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int varone = 1;
	int chars = 0;
	int fl;
	char string[buff];

	if (filename == NULL)
		return (0);

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);

	while (varone != 0 && letters > buff)
	{
		varone = read(fl, string, buff);
		write(STDOUT_FILENO, string, varone);
		chars += varone;
		letters -= buff;
	}
	varone = read(fl, string, letters);
	write(STDOUT_FILENO, string, varone);
	chars += varone;
	close(fl);


	return (chars);
}
