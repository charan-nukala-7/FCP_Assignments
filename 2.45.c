#include <stdio.h>

int main()
{
    int a[10], pos = 0, neg = 0, zero = 0;

    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 10; i++)
    {
        if (a[i] > 0)
            pos++;
        else if (a[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive = %d\nNegative = %d\nZero = %d",
           pos, neg, zero);

    return 0;
}