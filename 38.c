//PROGRAM TO PRINT 1,4,9,16,25,………N
#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Square series up to %d: ", n);
    while (i * i <= n) {
        printf("%d ", i * i);
        i++;
    }

    return 0;
}

