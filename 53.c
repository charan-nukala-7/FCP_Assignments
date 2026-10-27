
#include <stdio.h>

int main()
{
    int a[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Enter element a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }   
    }

    for(int i =0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
         sum += a[i][j];
        printf("sum of row %d =%d\n",i+1,sum);
    }
}
