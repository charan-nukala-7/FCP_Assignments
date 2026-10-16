// PROGRAM TO FIND THE MAXIMUM AND MINIMUM FROM N NUMBERS
#include <stdio.h>

int main(void)
{
	int count;
	long long number;
	long long maximum;
	long long minimum;

	printf("Enter the number of values: ");
	scanf("%d", &count);

	if (count <= 0)
	{
		printf("The number of values must be positive.\n");
		return 0;
	}

	printf("Enter %d numbers:\n", count);
	scanf("%lld", &number);
	maximum = number;
	minimum = number;

	for (int index = 1; index < count; index++)
	{
		scanf("%lld", &number);

		if (number > maximum)
			maximum = number;
		if (number < minimum)
			minimum = number;
	}

	printf("Maximum number = %lld\n", maximum);
	printf("Minimum number = %lld\n", minimum);

	return 0;
}