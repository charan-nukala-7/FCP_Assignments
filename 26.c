//PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W  1 TO N
#include <stdio.h>

int main(void)
{
	int n;
	int odd_sum = 0;
	int even_sum = 0;

	printf("Enter N: ");
	scanf("%d", &n);

	for (int number = 1; number <= n; number++)
	{
		if (number % 2 == 0)
			even_sum += number;
		else
			odd_sum += number;
	}

	printf("Sum of odd numbers = %d\n", odd_sum);
	printf("Sum of even numbers = %d\n", even_sum);

	return 0;
}