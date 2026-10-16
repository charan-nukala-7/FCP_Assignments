// PROGRAM TO PRINT THE FIBONACCI SERIES
#include <stdio.h>

int main(void)
{
	int terms;
	long long first = 0;
	long long second = 1;

	printf("Enter the number of terms: ");
	scanf("%d", &terms);

	if (terms <= 0)
	{
		printf("The number of terms must be positive.\n");
		return 0;
	}

	printf("Fibonacci series: ");
	for (int index = 0; index < terms; index++)
	{
		printf("%lld", first);

		if (index < terms - 1)
			printf(", ");

		long long next = first + second;
		first = second;
		second = next;
	}
	printf("\n");

	return 0;
}