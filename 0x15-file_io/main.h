#ifndef _MAIN_H_
#define _MAIN_H_

/* all header included for the system call usage */
#include <unistd.h>
#include <stdlib.h>
#include <fnctl.h>

/* protypes to all task included here */
int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
