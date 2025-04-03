#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: The name of the file to append to.
* @text_content: NULL-terminated string to add at the end of the file.
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);
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
