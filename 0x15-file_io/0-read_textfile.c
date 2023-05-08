#include "main.h"
/**
 * read_textfile - ..
 * @filename: ..
 * @letters: ...
 * Return: ..
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t read_file, write_file;
char *buffer;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd < 0)
{
return (0);
}
buffer = malloc(letters * sizeof(char));
if (buffer == NULL)
{
close(fd);
return (0);
}
read_file = read(fd, buffer, letters);
if (read_file < 0 || read_file == 0)
{
close(fd);
free(buffer);
return (0);
}
write_file = write(STDOUT_FILENO, buffer, read_file);
if (write_file == -1 || write_file != read_file)
{
close(fd);
free(buffer);
return (0);
}
free(buffer);
close(fd);
return (write_file);
}
