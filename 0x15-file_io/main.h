#ifndef main_h
#define main_h

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int _strlen(char *s);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_text_to_file(const char *cmd, const char *file_from, char *file_to);
void closefd(int fd_no1, int fd_no2);

#endif
