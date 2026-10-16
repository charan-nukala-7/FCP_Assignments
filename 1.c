#include <stdio.h>

int main(void)
{
	double principal, rate, time, simple_interest;

	printf("Enter principal amount: \n");
	scanf("%lf", &principal);

	printf("Enter rate of interest (in %%): \n");
	scanf("%lf", &rate);

	printf("Enter time (in years): \n");
	scanf("%lf\n", &time);

	simple_interest = (principal * rate * time) / 100.0;

	printf("Simple Interest = %.2f\n", simple_interest);

	return 0;
}
