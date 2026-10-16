//PROGRAM TO PRINT 2,4,6,8,10,12………N
#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i = i + 2)
    {
        printf("%d ", i);
    }

    return 0;
}