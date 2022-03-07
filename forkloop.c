#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    int i;
    for (i = 0; i < 4; i++) {
        fork();
        printf("Proceso \n");
    }
    return 0;
}