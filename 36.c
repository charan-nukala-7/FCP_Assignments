//PROGRAM TO PRINT 1,3,5,7,9………N
#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i + 2)
    {
        printf("%d ", i);
    }

    return 0;
}