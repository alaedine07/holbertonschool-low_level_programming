#include "holberton.h"
#include <elf.h>

void print_magic(Elf64_Ehdr *header)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (header->e_ident[i] != 127 &&
		    header->e_ident[i] != 'E' &&
		    header->e_ident[i] != 'L' &&
		    header->e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
	printf("Elf Header: \n");
}

void check_elf(Elf64_Ehdr *header)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (header->e_ident[i] != 127 &&
		    header->e_ident[i] != 'E' &&
		    header->e_ident[i] != 'L' &&
		    header->e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
	printf("Elf Header: \n");
}

int main(int argc, char **argv)
{
	Elf64_Ehdr *header;
	int fd, r;
	/* basic checks */
	if (argc != 2)
	{
		dprintf(2, "Usage: ./elf_header elf_file\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(fd, header, sizeof(Elf64_Ehdr));
	if (r < 0)
	{
		free(header);
		close(fd);
		dprintf(STDERR_FILENO, "Error: %s: No such file\n", argv[1]);
		exit(98);
	}
	/* functions to parse the elf file */
	check_elf(header);
	print_magic(header);
	return (0);
}