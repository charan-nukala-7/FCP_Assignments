#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    int n;

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 1)
        y = 1 + x;
    else if (n == 2)
        y = 1 + x / n;
    else if (n == 3)
        y = 1 + pow(x, n);
    else
        y = 1 + n * x;

    printf("Y(x,n) = %.2f\n", y);

    return 0;
}