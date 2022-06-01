#include "main.h"
/**
 * error_check - checks for errors
 * @fdfr: integer returned from read
 * @fdto: integer returned from write
 * @av: argument element
 */
void error_check(int fdfr, int fdto, char **av)
{
	/* check if the file was read */
	if (fdfr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	/* check if file was written */
	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}
/**
 * main - Entry point
 * @ac: arguments
 * @av: arguments elements
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	/* Declare variables */
	int numread = 1024, numwrit, fdfr, fdto, clfr, clto;
	char buf[1024];
	/* check if arguments are correct */
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open and read the file */
	fdfr = open(av[1], O_RDONLY);
	/* open and wrtie to file_to */
	fdto = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	/* check for error */
	error_check(fdfr, fdto, av);
	while (numread > 0)
	{
		/* read and give the number of char read */
		numread = read(fdfr, buf, 1024);
		/* check for error */
		if (numread == -1)
			error_check(-1, 0, av);
		/* write to the file */
		numwrit = write(fdto, buf, numread);
		/* check for error */
		if (numwrit == -1)
			error_check(0, -1, av);
	}
	clfr = close(fdfr);
	/* check if file descriptor for read closes */
	if (clfr == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdfr), exit(100);
	/* check if file descriptor for write closes */
	clto = close(fdto);
	if (clto == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdto), exit(100);
	return (0);
}
