#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
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
