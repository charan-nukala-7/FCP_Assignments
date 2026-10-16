// PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES.
#include <stdio.h>

int main(void)
{
	double fahrenheit, centigrade;

	printf("Enter temperature in Fahrenheit: \n");
	scanf("%lf", &fahrenheit);

	centigrade = (fahrenheit - 32.0) * 5.0 / 9.0;

	printf("Temperature in Centigrade = %.2f degrees\n", centigrade);

	return 0;
}
