#include "main.h"
#define BUF_SIZE 1024
/**
 * main - execution point
 * @argc: ...
 * @argv: ...
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
char buffer[BUF_SIZE];
ssize_t cRead, new_write;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}
while ((cRead = read(fd_from, buffer, BUF_SIZE)) > 0)
{
new_write  = write(fd_to, buffer, cRead);
if (new_write != cRead)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}
}
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
return (0);
}
