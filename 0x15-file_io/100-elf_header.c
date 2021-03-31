#include "holberton.h"
#include <elf.h>
/**
 * print_entry - function to print entry point address
 * @header: pointer to data
**/
void print_entry(Elf64_Ehdr *header)
{
	printf("  Entry point address:               ");
	printf("0x%02lx\n", header->e_entry);
}
/**
 * print_type - function to print ELF type
 * @header: pointer to data
**/
void print_type(Elf64_Ehdr *header)
{
	printf("  Type:                              ");
	switch (header->e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_type);
	}
}
/**
 * print_ABI_ver - function to print ABI version
 * @header: pointer to data
**/
void print_ABI_ver(Elf64_Ehdr *header)
{
	printf("  ABI Version:                       %d",
		header->e_ident[EI_VERSION]);

	switch (header->e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}
/**
 * print_osABI - function to print OS ABI
 * @header: pointer to data
**/
void print_osABI(Elf64_Ehdr *header)
{
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
	}
}
/**
 * print_version - function to check ELF version
 * @header: pointer to data
**/
void print_version(Elf64_Ehdr *header)
{
	printf("  Version:                           ");
	switch (header->e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf("%d (current)\n", header->e_ident[EI_VERSION]);
		break;
	default:
		printf("\n");
		break;
	}

}
/**
 * print_data - functionto print the ELF data
 * @header: pointer to data
**/
void print_data(Elf64_Ehdr *header)
{
	printf("  Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("INVALID Format\n");
			break;
	}
}
/**
 * print_class - print the ELF class
 * @header: pointer to data
**/
void print_class(Elf64_Ehdr *header)
{
	printf("  Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
	}
}
/**
 * print_magic - function to print magic bytes
 * @header: pointer to data
**/
void print_magic(Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < 15; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("%02x ", header->e_ident[15]);
	printf("\n");
}
/**
 * check_elf - function to check if the file is ELF
 * @header: pointer to data
**/
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
/**
 * main - entry point
 * @argc: argument number
 * @argv: arguments
 * Return: function mimic Readelf command
 * Resources: https://github.com/TheCodeArtist/elf-parser/
 * https://llvm.org/doxygen/BinaryFormat_2ELF_8h_source.html#l00107
 * docs.oracle.com/cd/E19683-01/816-1386/6m7qcoblh/index.html
**/
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
	print_class(header);
	print_data(header);
	print_version(header);
	print_osABI(header);
	print_ABI_ver(header);
	print_type(header);
	print_entry(header);
	return (0);
}
