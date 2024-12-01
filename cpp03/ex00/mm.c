#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {

    char *s;
    int fd = open("test.txt", O_RDWR);

    write(fd, "Hello hamza have a good day", 30);
    printf("fd = %d\n", fd);
    close(fd);
    fd = open("test.txt", O_RDWR);
    int a = read(fd, s, 10);
    printf("a = %d\n", a);
    s[a] = '\0';
    printf("|%s|!\n", s);
    return 0;
}