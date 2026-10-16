//PROGRAM TO CALCULATE FACTORIAL OF A NO
#include <stdio.h>

int main() {
    int n, i, factorial;

    printf("Enter a number: ");
    scanf("%d", &n);

    factorial = 1;
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", n, factorial);

    return 0;
}