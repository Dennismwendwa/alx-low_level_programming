#include "main.h"

/**
  * main - entry point
  * @cnt:- commandlint args count
  * @av:- commandline args
  * Return:- Always 0 (success)
  */

int main(int cnt, char *av[])
{
	char ch[SIZE];
	int frm, kwnda, rdmwanz, wrmwanz;
	mode_t acces = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;

	if (cnt != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	frm = open(av[1], O_RDONLY);
	if (frm == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	kwnda = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, acces);
	if (kwnda == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	rdmwanz = 1;
	while (rdmwanz)
	{
		rdmwanz = read(frm, ch, SIZE);
		if (rdmwanz == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (rdmwanz > 0)
		{
			wrmwanz = write(kwnda, ch, rdmwanz);
			if (wrmwanz != rdmwanz || wrmwanz == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(frm) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", frm), exit(100);
	if (close(kwnda) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", kwnda), exit(100);
	return (0);
}
