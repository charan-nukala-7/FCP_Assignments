#include <stdio.h>

int main(void)
{
	double sales, commission;

	printf("Enter sales amount: Rs. ");
	if (scanf("%lf", &sales) != 1) {
		printf("Invalid sales amount.\n");
		return 1;
	}

	if (sales <= 500) {
		commission = sales * 0.05;
	} else if (sales <= 2000) {
		commission = 35 + (sales - 500) * 0.10;
	} else if (sales <= 5000) {
		commission = 185 + (sales - 2000) * 0.12;
	} else {
		commission = sales * 0.125;
	}

	printf("Commission: Rs. %.2f\n", commission);
	return 0;
}
