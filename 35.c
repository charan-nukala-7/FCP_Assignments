// READ A NUMBER N AND PRINT A SINGLE-DIGIT SUM OF ITS DIGITS
#include <stdio.h>

int main(void)
{
	long long number;

	printf("Enter a number: ");
	scanf("%lld", &number);

	if (number < 0)
		number = -number;

	while (number >= 10)
	{
		long long digit_sum = 0;

		while (number != 0)
		{
			digit_sum += number % 10;
			number /= 10;
		}

		number = digit_sum;
	}

	printf("Single digit sum = %lld\n", number);

	return 0;
}
