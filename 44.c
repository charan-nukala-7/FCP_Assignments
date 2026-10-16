#include <stdio.h>

int main(void)
{
	double units, amount;

	printf("Enter electricity consumption in units: ");
	if (scanf("%lf", &units) != 1 || units < 0) {
		printf("Invalid consumption.\n");
		return 1;
	}

	if (units <= 200) {
		amount = units * 0.50;
	} else if (units <= 400) {
		amount = 100 + (units - 200) * 0.65;
	} else if (units <= 600) {
		amount = 230 + (units - 400) * 0.80;
	} else {
		amount = 425 + (units - 600) * 1.25;
	}

	printf("Amount to be paid: Rs. %.2f\n", amount);
	return 0;
}
