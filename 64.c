#include<stdio.h>
int f(int n)
{
    int a=0,b=1,c,i;
    for(i=0;i<=n;i++)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    f(n);
    return 0;
}