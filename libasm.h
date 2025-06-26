#ifndef LIBASM_H
# define LIBASM_H
# include <sys/types.h>
# include <string.h>

int ft_strlen(char *ptr);
ssize_t ft_write(int fd, void *buf, size_t count);
ssize_t ft_read(int fd, void *buf, size_t count);
int ft_strcmp(const char* s1, const char *s2);
char *ft_strcpy(char *dest, const char *src);

#endif