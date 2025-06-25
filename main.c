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
    // printf("%i\n", strcmp("test", "test1000000000000"));
    // printf("%i\n", strcmp("test10000", "test"));
    // printf("---------------------------------\n");
    // printf("%i\n", ft_strcmp("test", "tt"));
    // printf("%i\n", ft_strcmp("test", "test"));
    // printf("%i\n", ft_strcmp("test", "test1000000000000"));
    // printf("%i\n", ft_strcmp("test10000", "test"));
    printf("%i\n", ft_strcmp("test", "test"));
}