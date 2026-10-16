#include <stdio.h>

int main()
{
    int a[10], odd = 0, even = 0;

    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Odd = %d\nEven = %d", odd, even);

    return 0;
}