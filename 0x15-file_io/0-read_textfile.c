#include "main.h"

/**
 * read_textfile - function tgat reada a text file and prints it to POSIX standard output
 * @filename: path to file
 * @letters: number of characterd to print
 * Return: returns the number of letters it should read and print
 *
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp1, fp2, fp3, fp4;
	char *string;

	if (filename == NULL)
		return (0);
	fp1 = open(filename, O_RDONLY);
	if (!fp1 == -1)
		return (0);
	string = malloc(sizeof(char) * letters);
	if (string == NULL)
		return (0);
	fp2 = read(fp1,string,letters);
	if (fp2 = -1)
	{
		return (0);
		free(string);
	}
	fp3 = write(STDOUT_FILENO, string, fp2);
	if (fp2 == -1 || fp2 != fp3)
	{
		free(string);
		return (0);
	}
	fp4 = close(fp1);
	if (fp4 == -1)
	{
		free(fp4);
		return (0);
	}
	free(string);
	return (fp3);
}
