#include <stdio.h>

int main(void)
{
	double basic_salary, hra, da, gross_salary;

	printf("Enter basic salary: \n");
	scanf("%lf", &basic_salary);

	hra = basic_salary * 0.20;
	da = basic_salary * 0.80;
	gross_salary = basic_salary + hra + da;

	printf("Allowance = %.2f\n", hra);
	printf("Bonuses = %.2f\n", da);
	printf("Gross Salary = %.2f\n", gross_salary);

	return 0;
}
