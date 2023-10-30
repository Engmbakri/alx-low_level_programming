#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_error -  Prints an error message to stderr and exits
 * the program with status code 98.
 *
 * @message: The error message to display.
 */
void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * display_elf_header -  Displays the information contained
 * in the ELF header of an ELF file.
 *
 * @filename: The name of the ELF file.
 */
void display_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		print_error("Failed to open the file");
	Elf64_Ehdr header;

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Failed to read ELF header");
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1]
			!= ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2
			|| header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("Not a valid ELF file");
	printf("Magic: %02x %02x %02x %02x\n", header.e_ident[EI_MAG0],
			header.e_ident[EI_MAG1],
			header.e_ident[EI_MAG2], header.e_ident[EI_MAG3]);
	printf("Class: %d-bit\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
	printf("Data: %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB
			? "2's complement, little endian" :
			header.e_ident[EI_DATA] == ELFDATA2MSB
			? "2's complement, big endian" : "Invalid");
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI: %s\n", header.e_ident[EI_OSABI] ==
			ELFOSABI_SYSV ? "UNIX - System V" :
			"Unknown");
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type: %s\n", header.e_type == ET_REL ? "Relocatable file" :
			header.e_type == ET_EXEC ? "Executable file" :
			header.e_type == ET_DYN ? "Shared object file" :
			header.e_type == ET_CORE ? "Core file" : "Unknown");
	printf("Entry point address: 0x%lx\n", header.e_entry);
	close(fd);
}
