/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int op, rd;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		elfClose(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(op, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		elfClose(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	elfChecker(header->e_ident);
	printf("ELF Header:\n");
	magicPrinter(header->e_ident);
	classPrinter(header->e_ident);
	dataPrinter(header->e_ident);
	versionPrinter(header->e_ident);
	osabiPrinter(header->e_ident);
	abiPrinter(header->e_ident);
	typePrinter(header->e_type, header->e_ident);
	entryPrinter(header->e_entry, header->e_ident);

	free(header);
	elfClose(op);
	return (0);
}

