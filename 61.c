#include <stdio.h>

int palindrome(int n)
{
    int original = n, rev = 0, rem;

    while(n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(original == rev)
        {
            printf("%d is a palindrome number\n", original);
            return 1;
        }
    else
        {
            printf("%d is not a palindrome number\n", original);
            return 0;
        }
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    palindrome(n);
    return 0;
}