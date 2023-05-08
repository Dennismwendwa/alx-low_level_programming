
#include "main.h"



ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t kuku, word;
	int filed;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	filed = open(filename, O_RDONLY);
	if (filed == -1)
		return (0);

	word = read(filed, buff, letters);
	if(word == -1)
		return (0);

	kuku = write(STDOUT_FILENO, buff, word);
	if(kuku == -1)
		return (0);

	if (close(filed) == -1)
		return (0);

	free(buff);

	return (kuku);

}
