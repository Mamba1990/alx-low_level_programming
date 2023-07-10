#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void elfChecker(unsigned char *e_ident);
void magicPrinter(unsigned char *e_ident);
void classPrinter(unsigned char *e_ident);
void dataPrinter(unsigned char *e_ident);
void versionPrinter(unsigned char *e_ident);
void abiPrinter(unsigned char *e_ident);
void osabiPrinter(unsigned char *e_ident);
void typePrinter(unsigned int e_type, unsigned char *e_ident);
void entryPrinter(unsigned long int e_entry, unsigned char *e_ident);
void elfClose(int elf);
/**
 * elfChecker - Checks if a file is an ELF file.
 * @e_ident:  pointer to an array that contains the ELF magic numbers.
 *
 * Return: void
 */
void elfChecker(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * magicPrinter - Prints the magic numbers
 * @e_ident: A pointer to an array that the ELF magic numbers.
 *
 * Return: void
 */
void  magicPrinter(unsigned char *e_ident)
{
	int index;

	printf(" Magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * classPrinter - Prints the cla
 * @e_ident: A pointer to an array that contains the ELF class.
 * Return : void
 */
void classPrinter(unsigned char *e_ident)
{
	printf(" Class: ");

	switch (e_ident[EI_CLASS])
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
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * dataPrinter - Prints the data
 * @e_ident: A pointer to an array that contains the ELF class.
 * Return: void
 */
void dataPrinter(unsigned char *e_ident)
{
	printf(" Data: ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * versionPrinter - Prints the version of an ELF header.
 * @e_ident: A pointer to an array that contains the ELF version.
 * Retun : void
 */
void versionPrinter(unsigned char *e_ident)
{
	 printf(" Version: %d",
			  e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
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
 * osabiPrinter - Prints the OS/ABI of an ELF
 * @e_ident: A pointer to an array that contains the ELF version.
 * Return: void
 */
void osabiPrinter(unsigned char *e_ident)
{
	printf(" OS/ABI: ");

	switch (e_ident[EI_OSABI])
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
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * abiPrinter - Prints the ABI version of an ELF
 * @e_ident: A pointer to an array that contains the ELF ABI version.
 * Return: void
 */
void abiPrinter(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n",
		e_ident[EI_ABIVERSION]);
}

/**
 * typePrinter - Prints the type of the header.
 * @e_type:  type of ELF.
 * @e_ident: A pointer to an array that contains the ELF class.
 * Return: void
 */
void typePrinter(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

	switch (e_type)
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
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * entryPrinter - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry
 * @e_ident: A pointer to an array that containins the ELF class.
 * Return: void
 */
void entryPrinter(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * elfClose - Closes an ELF file.
 * @elf: The file  of  ELF
 *
 * Return: void
 */
void elfClose(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

