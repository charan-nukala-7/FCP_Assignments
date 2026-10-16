//PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N.
#include <stdio.h>

int main(void)
{
    int n;
    float sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        sum += (float)i / factorial;}

    printf("Sum of the series: %.2f\n", sum);
    return 0;
}