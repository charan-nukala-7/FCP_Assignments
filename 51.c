#include <stdio.h>


int main()
{
    int n, i, t,a[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int start = 0, end = n - 1;
    while (start < end)
    {
        t = a[start];
        a[start] = a[end];
        a[end] = t;
        start++;
        end--;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

