#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
* create_file - Creates a file and writes text content to it.
* @filename: Name of the file to create.
* @text_content: NULL-terminated string to write to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
mode_t permissions = S_IRUSR | S_IWUSR;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
size_t len = strlen(text_content);
bytes_written = write(fd, text_content, len);
if (bytes_written == -1 || (size_t)bytes_written != len)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
