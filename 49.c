#include <stdio.h>
void sigma(int age);
int main()
{
    int n;
    printf("enter ur age?");
    scanf("%d", &n);
    int age=n;
    sigma(age);
    return 0;
}
void sigma(int age)
{
    printf("your age is %d",age);
    
}