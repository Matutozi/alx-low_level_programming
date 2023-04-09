#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: path to file
 * @text_content: text contenr
 *
 * Return: returns 1 on success and -1 whwn not successful
 *
*/

int create_file(const char *filename, char *text_content)
{
	int fp1, fp2, fp3;

	if (filename == NULL)
	{
		return (-1);
	}
	fp1 = creat(filename, 0600);
	if (fp1 == -1)
		return (-1);
	if (text_content)
	{
		fp2 = write(fp1, text_content, strlen(text_content));
		if (fp2 == -1)
			return (-1);
	}
	fp3 = close(fp1);
	if (fp3 == -1)
		return (-1);
	return (1);
}
