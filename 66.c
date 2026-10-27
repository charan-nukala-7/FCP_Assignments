// ncr program in c
#include <stdio.h>
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;

    }
    return fact;
}
int nCr(int n,int r)
{
     return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n,r;
    printf("Enter the value of n & r: ");
    scanf("%d %d",&n,&r);
    printf("nCr=%d",nCr(n,r));
    return 0;
}