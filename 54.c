
#include <stdio.h>

int main()
{
    int a[3][3], transpose[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            transpose[j][i]=a[i][j];
    }

    printf("Transpose:\n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            printf("%d ", transpose[i][j]);

        printf("\n");
    }

    return 0;
}
