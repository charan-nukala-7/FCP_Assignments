#include <stdio.h>

int main(void)
{
	double subject1, subject2, subject3, subject4, subject5, average, percentage;
    printf("Enter the marks of 5 subjects and each out of 100: \n");
	printf("Enter the first subject marks: \n");
	scanf("%lf", &subject1);

	printf("Enter the second subject marks: \n");
	scanf("%lf", &subject2);

	printf("Enter the third subject marks: \n");
	scanf("%lf", &subject3);

    	printf("Enter the fourth subject marks: \n");
	scanf("%lf", &subject4);

    printf("Enter the fifth subject marks: \n");
	scanf("%lf", &subject5);

    double Total= (subject1 + subject2 + subject3 + subject4 + subject5);

	printf("Total = %.2f\n", Total);

	percentage = (Total / 500.0) * 100.0;

	printf("Percentage = %.2f%%\n", percentage);

	average = (subject1 + subject2 + subject3 + subject4 + subject5) / 5.0;

	printf("Average = %.2f\n", average);

	return 0;
}
