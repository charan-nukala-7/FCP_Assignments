#include <stdio.h>
int exchange(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    return 0;

}
int main()
{
    int a,b;
    printf("Enter two numbers a and b: ");
    scanf("%d %d",&a,&b);
    printf("\nbefore exchange a=%d b=%d\n",a,b);
    exchange(&a,&b);
    printf("after exchange a=%d b=%d\n",a,b);
}