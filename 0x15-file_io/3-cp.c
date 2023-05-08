
#include "main.h"

/**
  * main - entry point
  * @av:- number of args
  * @var:- the atgs
  * Return:- always 0
  */

int main(int var, char *av[])
{
	char string[buff];
	int kwenda, kutoka, soma, andika;
	mode_t permiss = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;

	if (var != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	kwenda = open(av[1], O_RDONLY);
	if (kwenda == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	kutoka = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, permiss);
	if (kutoka == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	soma = 1;
	while (soma)
	{
		soma = read(kwenda, string, buff);
		if (soma == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (soma > 0)
		{
			andika = write(kutoka, string, soma);
			if (andika != soma || andika == -1)
			{
				dprintf(STDERR_FILENO, "Errror: Can't write to %s\n", av[2]), exit(99);
			}
		}
	}
	if (close(kwenda) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file fd %d\n", kwenda), exit(100);
	if (close(kutoka) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file fd %d\n", kutoka), exit(100);
	return (0);
}
