// PROGRAM TO FIND THE MAXIMUM AND SECOND MAXIMUM FROM N NUMBERS
#include <stdio.h>

int main(void)
{
	int count;
	long long number;
	long long maximum = 0;
	long long second_maximum = 0;
	int has_maximum = 0;
	int has_second_maximum = 0;

	printf("Enter the number of values: ");
	scanf("%d", &count);

	printf("Enter %d numbers:\n", count);
	for (int index = 0; index < count; index++)
	{
		scanf("%lld", &number);

		if (!has_maximum || number > maximum)
		{
			if (has_maximum)
			{
				second_maximum = maximum;
				has_second_maximum = 1;
			}
			maximum = number;
			has_maximum = 1;
		}
		else if (number < maximum &&
				 (!has_second_maximum || number > second_maximum))
		{
			second_maximum = number;
			has_second_maximum = 1;
		}
	}

	if (has_second_maximum)
	{
		printf("Maximum number = %lld\n", maximum);
		printf("Second maximum number = %lld\n", second_maximum);
	}
	else
		printf("At least two distinct numbers are required.\n");

	return 0;
}