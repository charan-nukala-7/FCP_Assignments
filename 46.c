#include <stdio.h>

int main()
{
    int a[100], n, i, max, second, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    max = a[0];

    // Find maximum
    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    // Find second maximum
    for(i = 0; i < n; i++)
    {
        if(a[i] < max && (found == 0 || a[i] > second))
        {
            second = a[i];
            found = 1;
        }
    }

    printf("Maximum = %d\n", max);

    if(found == 1)
        printf("Second maximum = %d\n", second);
    else
        printf("Second maximum does not exist\n");

    return 0;
}