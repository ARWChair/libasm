#include "libasm.h"
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
    // printf("Len: %i\n", ft_strlen("lol"));
    // // printf("---------------------------------\n");
    // // printf("---------------------------------\n");
    // // printf("Len: %li\n", write(1, "lol\n", 4));
    // // printf("Len: %li\n", write(1, "lol\n", -10));
    // // printf("Len: %li\n", write(-10, "lol\n", 4));
    // // printf("Len: %li\n", write(-10, "lol\n", -10));
    // // printf("---------------------------------\n");
    // // printf("Len: %li\n", ft_write(1, "lol\n", 4));
    // // printf("Len: %li\n", ft_write(1, "lol\n", -10));
    // // printf("Len: %li\n", ft_write(-10, "lol\n", 4));
    // // printf("Len: %li\n", ft_write(-10, "lol\n", -10));
    // // printf("---------------------------------\n");
    // // printf("---------------------------------\n");
    // // {
    // //     int test_fd = open("test.txt", O_RDWR);
    // //     char r;
    // //     printf("Len: %li\n", read(test_fd, &r, 4));
    // //     write(1, &r, 1);
    // //     write(1, "\n", 1);
    // //     printf("Len: %li\n", read(test_fd, &r, -10));
    // //     printf("Len: %li\n", read(-10, &r, 4));
    // //     printf("Len: %li\n", read(-10, &r, -10));
    // //     close(test_fd);
    // // }
    // // {
    // //     int test_fd = open("test.txt", O_RDWR);
    // //     char r;
    // //     printf("---------------------------------\n");
    // //     printf("Len: %li\n", ft_read(test_fd, &r, 4));
    // //     ft_write(1, &r, 1);
    // //     ft_write(1, "\n", 1);
    // //     printf("Len: %li\n", ft_read(test_fd, &r, -10));
    // //     printf("Len: %li\n", ft_read(-10, &r, 4));
    // //     printf("Len: %li\n", ft_read(-10, &r, -10));
    // //     close(test_fd);
    // // }
    // // printf("---------------------------------\n");
    // printf("---------------------------------\n");
    // printf("Len: %i\n", ft_strcmp("test", "lol"));

    // printf("%i\n", strcmp("test", "tt"));
    // printf("%i\n", strcmp("test", "test"));
    // printf("%i\n", strcmp("text", "text"));
    // printf("%i\n", strcmp("test10000", "test"));
    // printf("---------------------------------\n");
    // printf("%i\n", ft_strcmp("test", "tt"));
    // printf("%i\n", ft_strcmp("test", "test"));
    // printf("%i\n", ft_strcmp("test", "test1000000000000"));
    // printf("%i\n", ft_strcmp("test10000", "test"));
    // printf("%i\n", strcmp("test3", "test"));
    // printf("%i\n", ft_strcmp("test3", "test"));
    // printf("---------------------------------\n");
    // char src[] = "A";
    // char dest[] = "A";
    // printf("%s, %s\n", src, dest);
    // printf("%s\n", strcpy(dest, src));
    // printf("%s, %s\n", src, dest);

    // char src2[] = "A";
    // char dest2[] = "A";
    // printf("%s, %s\n", src2, dest2);
    // printf("%s\n", ft_strcpy(dest2, src2));
    // printf("%s, %s\n", src2, dest2);
    char * str = strdup("ab");
    char * str2 = ft_strdup("ab");
    printf("%p\n", str);
    printf("%p\n", str2);
    printf("%i\n", str);
    printf("%i\n", str2);
    printf("%c\n", str);
    printf("%c\n", str2);
    printf("%s\n", str);
    printf("%s\n", str2);

    printf("%i, %i, %i\n", str[0], str[1], str[2]);
    printf("%i, %i, %i\n", str2[0], str2[1], str2[2]);

    const char *fail = "";
    const char *fail2 = "";
    char * str3 = strdup(fail);
    char * str4 = ft_strdup(fail2);
    printf("%p\n", str3);
    printf("%p\n", str4);
    printf("%i\n", str3);
    printf("%i\n", str4);
    printf("%c\n", str3);
    printf("%c\n", str4);
    printf("%i\n", str3[0]);
    printf("%i\n", str4[0]);
    printf("%s\n", str3);
    printf("%s\n", str4);
}