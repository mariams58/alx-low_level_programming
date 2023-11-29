#include <elf.h>
#include "main.h"
#include <stdio.h>
/**
  * check_elf - checks if file is an elf file
  * @header: header content
  *
  * Return: Alwys 0 or -1 on fail
  */
int check_elf(Elf64_Ehdr header)
{
	int i;

	if (header.e_type == 0x7f)
		i = 0;
	else if (header.e_ident[1] == 'E')
		i = 0;
	else if (header.e_ident[2] == 'L')
		i = 0;
	else if (header.e_ident[3] == 'F')
		i = 0;
	else
		i = -1;
	return (i);
}
/**
 * main - check the code
 * @ac: argument count
 * @av: argument list array
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd;
	ssize_t rd, wr;
	Elf64_Ehdr header;

	if (ac != 2)
	{
		printf("missing arguments");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (0);
	rd = read(fd, &header, sizeof(header));
	if (rd == -1)
		return (0);

	if (check_elf(header) != 0)
	{
		dprintf(STDERR_FILENO, "File is not an elf file\n");
		exit(98);
	}
	wr = write(STDOUT_FILENO, header, rd);
	if (wr == -1 || wr != rd)
		return (0);
	return (0);
}
