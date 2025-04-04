#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 1024

/**
* error_exit - Affiche un message d'erreur et quitte avec un code spécifique
* @exit_code: Le code de sortie
* @message: Le message d'erreur à afficher
* @arg: L'argument à inclure dans le message (peut être NULL)
*/
void error_exit(int exit_code, const char *message, const char *arg)
{
if (arg)
dprintf(STDERR_FILENO, message, arg);
else
dprintf(STDERR_FILENO, "%s", message);
exit(exit_code);
}
/**
* close_file - Ferme un descripteur de fichier et gère les erreurs
* @fd: Le descripteur de fichier à fermer
*/
void close_file(int fd)
{
if (close(fd) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
}
/**
* main - Copie le contenu d'un fichier vers un autre fichier
* @argc: Le nombre d'arguments
* @argv: Les arguments passés au programme
*
* Return: 0 en cas de succès, ou quitte avec un code
* d'erreur approprié en cas d'échec
*/
int main(int argc, char *argv[])
{
int file_from, file_to;
ssize_t read_bytes, written_bytes;
char buffer[BUFFER_SIZE];
if (argc != 3)
error_exit(97, "Usage: cp file_from file_to\n", NULL);
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
error_exit(98, "Error: Can't read from file %s\n", argv[1]);
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
error_exit(99, "Error: Can't write to %s\n", argv[2]);
while ((read_bytes = read(file_from, buffer, BUFFER_SIZE)) > 0)
{
written_bytes = write(file_to, buffer, read_bytes);
if (written_bytes != read_bytes)
error_exit(99, "Error: Can't write to %s\n", argv[2]);
}
if (read_bytes == -1)
error_exit(98, "Error: Can't read from file %s\n", argv[1]);
close_file(file_from);
close_file(file_to);
return (0);
}
