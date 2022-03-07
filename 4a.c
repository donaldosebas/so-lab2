#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid;
    pid = fork();

    if (pid == 0) {
        int i;
        for (i = 0; i < 10000000; i++) {
            printf("%d ", i);
        }
    } else {
        for (;;) {}
    }
    return 0;
}
