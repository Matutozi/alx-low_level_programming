#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the
 *			POSIX standard output.
 * @filename: path to file
 * @letters: number of characters to print
 *
 * Return: returns the number of letters it should read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t fp1, fp2, fp3;
	char *string;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	string = malloc(sizeof(char) * letters);
	if (!string)
		return (0);

	fp1 = read(fp, string, letters);
	if (fp1 == -1)
	{
		free(string);
		return (0);
	}

	fp2 = write(STDOUT_FILENO, string, fp1);
	if (fp2 == -1 || fp1 != fp2)
	{
		free(string);
		return (0);
	}

	fp3 = close(fp);
	if (fp3 == -1)
	{
		free(string);
		return (0);
	}
	free(string);
	return (fp2);
}
