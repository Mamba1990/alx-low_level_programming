#include <stdio.h>
#include "main.h"
/**
 * main - Entry point.
 * @argc: argument count
 * @argv: argument vector (one dim array)
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("\"%s\".\n", *argv);
return (0);
}
