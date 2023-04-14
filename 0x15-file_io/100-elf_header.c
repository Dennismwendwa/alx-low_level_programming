
#include "main.h"

void _error(char *err)
{
	fprintf(stderr, "Error: %s\n", err);
	exit(98);
}

int main(int argc, char *argv[])
{
	int fd = open (argv[1], O_RDONLY);
	Elf64_Ehdr ehdr;
	int i = 0;

	if (argc != 2)
		_error("Usage: elf_header elf_filename");


	if (fd == -1)
		_error("Cannot open file");


	
	if (read(fd, &ehdr, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		_error("Cannot read ELF header");


	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != 
			ELFMAG1 || ehdr.e_ident[EI_MAG2] != ELFMAG2 ||
			ehdr.e_ident[EI_MAG3] != ELFMAG3)
		_error("NOT an ELF file");

	printf("Magic:  ");
	for (; i < EI_NIDENT; i++)
		printf("%02x ", ehdr.e_ident[i]);
	printf("\n");

	printf("Class:                             %s\n", 
			ehdr.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");

	printf("Data:                              %s\n", 
			ehdr.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, 
			little endian" : "2's complement, big endian");

	printf("Version:                           %d (current)\n", 
			ehdr.e_ident[EI_VERSION]);

	printf("OS/ABI:                            %s\n", 
			ehdr.e_ident[EI_OSABI] == ELFOSABI_SYSV ?
			"UNIX System V ABI" : "Other");

	printf("ABI Varsion:                       %d\n",
			ehdr.e_ident[EI_ABIVERSION]);

	printf("Type:                              %s\n",
			ehdr.e_type == ET_NONE ? "NONE (No file type)" :
			ehdr.e_type == ET_REL ? "REL (Relocatable file)" :
			ehdr.e_type == RT_EXEC ? "EXEC (Executable file)" :
			ehdr.e_type == ET_DYN ? "DYN (Shared object file)" :
			ehdr.E_type == ET_CORE ? "CORE (Core file)" :
			"Other");

	printf("Entry point address:               %lx\n",
			(unsigned long) ehdr.e_entry);

	printf("Start of program headers:          %ld (bytes into file)\n",
			(long) ehdr.e_phoff);

	printf("Start of section headers:          %ld (byte into file)\n",
			(long) ehdr.e_shoff);

	return (0);
}	
