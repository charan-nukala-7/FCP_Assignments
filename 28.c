// PROGRAM TO CHECK WHETHER A NUMBER IS ARMSTRONG OR NOT
#include <stdio.h>

int main(void)
{
    int number;
    int original_number;
    int digit_count = 0;
    int sum = 0;
    int power;
    int temporary;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("%d is not an Armstrong number.\n", number);
        return 0;
    }

    original_number = number;
    temporary = number;

    if (temporary == 0)
        digit_count = 1;
    else
    {
        while (temporary != 0)
        {
            digit_count++;
            temporary /= 10;
        }
    }

    temporary = number;
    do
    {
        int digit = temporary % 10;

        power = 1;
        for (int count = 1; count <= digit_count; count++)
            power *= digit;

        sum += power;
        temporary /= 10;
    } while (temporary != 0);

    if (sum == original_number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
