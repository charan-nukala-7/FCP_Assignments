// PROGRAM TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT
#include <stdio.h>

int main(void)
{
	int number;
	int original_number;
	int reversed_number = 0;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number < 0)
	{
		printf("%d is not a palindrome.\n", number);
		return 0;
	}

	original_number = number;

	while (number != 0)
	{
		reversed_number = reversed_number * 10 + number % 10;
		number /= 10;
	}

	if (original_number == reversed_number)
		printf("%d is a palindrome.\n", original_number);
	else
		printf("%d is not a palindrome.\n", original_number);

	return 0;
}
