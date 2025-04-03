#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
* print_error - Prints an error message and exits with a specific code.
* @exit_code: The exit code.
* @message: The error message to print.
* @file_name: The name of the file causing the error.
*/
void print_error(int exit_code, const char *message, const char *file_name)
{
dprintf(STDERR_FILENO, "%s %s\n", message, file_name);
exit(exit_code);
}

/**
* main - Copies the content of one file to another file.
* @argc: The number of arguments passed to the program.
* @argv: The array of arguments passed to the program.
*
* Return: 0 on success, exits with specific codes on failure.
*/

int main(int argc, char *argv[])
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[1024];
if (argc != 3)
print_error(97, "Usage: cp file_from file_to", "");
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
print_error(98, "Error: Can't read from file", argv[1]);
fd_to = open(argv[2],
O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
if (fd_to == -1)
print_error(99, "Error: Can't write to", argv[2]);
while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
print_error(99, "Error: Can't write to", argv[2]);
}
if (bytes_read == -1)
print_error(98, "Error: Can't read from file", argv[1]);
if (close(fd_from) == -1)
print_error(100, "Error: Can't close fd", argv[1]);
if (close(fd_to) == -1)
print_error(100, "Error: Can't close fd", argv[2]);
return (0);
}
