#include <stdio.h>
#include <math.h>

int amstrong(int n)
{
int digits = 0, sum = 0, temp, rem;

    temp = n;
    while(temp != 0)
    {
        temp = temp / 10;
        digits++;
    }

    temp = n;
    while(temp > 0)
    {
        rem = temp % 10;
        sum += (int)pow(rem, digits);
        temp = temp / 10;
    }
    if(sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    amstrong(n) 
    ? printf("%d is an Armstrong number.\n", n) : printf("%d is not an Armstrong number.\n", n);
}