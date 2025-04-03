#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "main.h"

/**
* file_error - check the file can be open
* @src_fd: Source file decsriptor.
* @dest_fd: Dest file descriptor.
* @argv: Argument vector
* Return: No return
*/
void file_error(int src_fd, int dest_fd, char *argv[])
{
if (src_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (dest_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/**
* main - check the code
* @argc: Number of arguments
* @argv: Argument vector
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int src_fd, dest_fd, err_close;
ssize_t n_read, n_written;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}
src_fd = open(argv[1], O_RDONLY);
dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
file_error(src_fd, dest_fd, argv);
n_read = 1024;
while (n_read == 1024)
{
n_read = read(src_fd, buffer, 1024);
if (n_read == -1)
file_error(-1, 0, argv);
n_written = write(dest_fd, buffer, n_read);
if (n_written == -1)
file_error(0, -1, argv);
}
err_close = close(src_fd);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
exit(100);
}
err_close = close(dest_fd);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
exit(100);
}
return (0);
}
