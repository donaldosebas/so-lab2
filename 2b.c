#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t id1;
    pid_t id2;
    pid_t id3;
    int i;
    clock_t start;
    clock_t end;

    start = clock();
    id1 = fork();

    if (id1 == 0) {
        id2 = fork();

        if (id2 == 0) {
            id3 = fork();

            if (id3 == 0) {
                for (i = 0; i < 1000000; i++) {}
            } else {
                for (i = 0; i < 1000000; i++) {}
                wait(NULL);
            }
        } else {
            for (i = 0; i < 1000000; i++) {}
            wait(NULL);
        }
    } else {
        wait(NULL);
        end = clock();
        printf("El periodo es %f \n", (double)(end - start));
    }
    return 0;
}