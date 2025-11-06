#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
    int fd1 = open("1.txt", O_RDONLY);
    int fd2 = open("2.txt", O_RDONLY);
    char *line;

    line = get_next_line(fd1);
    printf("Line 1: %s", line);
    free(line);

    line = get_next_line(fd2);
    printf("Line 2: %s", line);
    free(line);

    line = get_next_line(fd1);
    printf("Line 3: %s", line);
    free(line);

    line = get_next_line(fd2);
    printf("Line 4: %s", line);
    free(line);

    printf("\n");

    close(fd1);
	close(fd2);
    return 0;
}