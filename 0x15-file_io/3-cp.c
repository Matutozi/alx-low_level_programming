#include "main.h"

#define BUFFER_SIZE 1024
/**
 * print_error - function that ouptput error message
 * @message: first parameter
 * @filename: 2nd parameter
 * @code: thord parametr
 *
 * Return: void
*/

void print_error(char *message, char *filename, int code)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
}
/**
 * check_arguments - function that checks the argument
 * @argc: param 1
 * @argv: paametr 2
 * Return: void
 *
*/
void check_arguments(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to\n", NULL, 97);
	}
}

/**
 * open_source_file - function that 
 * @filename: parameter
 * Return: return int
*/

int open_source_file(char *filename)
{
	int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("Error: Can't read from file %s\n", filename, 98);
	}
	return fd;
}

/**
 * open_destination - function that opens destin
 * @filename: parameter
 * Return: returns int
*/
int open_destination_file(char *filename)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		print_error("Error: Can't write to file %s\n", filename, 99);
	}
	return fd;
}
/**
 * copy_file_content - function that copies the content
 * @fd_from: paraeter
 * @fd_to: param
 * Return: void
*/
void copy_file_content(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t num_read, num_written;

    while ((num_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        num_written = write(fd_to, buffer, num_read);
        if (num_written != num_read) {
            print_error("Error: Can't write to file %s\n", argv[2], 99);
        }
    }

    if (num_read == -1) {
        print_error("Error: Can't read from file %s\n", argv[1], 98);
    }
}

void close_file(int fd, char *filename) {
    if (close(fd) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

int main(int argc, char *argv[]) {
    check_arguments(argc, argv);
    int fd_from = open_source_file(argv[1]);
    int fd_to = open_destination_file(argv[2]);
    copy_file_content(fd_from, fd_to);
    close_file(fd_from, argv[1]);
    close_file(fd_to, argv[2]);
    return 0;
}

