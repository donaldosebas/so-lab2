#include <stdio.h>
#include <time.h>

int main() {
    clock_t start;
    clock_t end;
    int i;

    start = clock();

    for (i = 0; i < 1000000; i++) {}
    for (i = 0; i < 1000000; i++) {}
    for (i = 0; i < 1000000; i++) {}

    end = clock();

    printf("El periodo es %f \n", (double)(end - start));
    return 0;
}