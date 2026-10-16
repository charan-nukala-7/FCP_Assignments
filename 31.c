// PROGRAM TO PRINT THE SUM OF INDIVIDUAL DIGITS OF A NUMBER
#include <stdio.h>

int main(void)
{
    char number[100];
    int sum = 0;

    printf("Enter a number: ");
    scanf("%99s", number);

    for (int index = 0; number[index] != '\0'; index++)
        sum += number[index] - '0';

    printf("Sum of individual digits = %d\n", sum);

    return 0;
}
