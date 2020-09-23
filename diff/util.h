#include <sys/stat.h>
#include <stdio.h>
#include <stddef.h>

#ifndef SIZE_MAX
#define SIZE_MAX ((size_t)-1)
#endif

char *fgetln(FILE *, size_t *);

void warnc(int, const char *, ...);
void vwarnc(int, const char *, va_list);
void errc(int, int, const char *, ...);
void verrc(int, int, const char *, va_list);

size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
