//PROGRAM TO CALCULATE AREA OF A TRIANGLE
#include <stdio.h>
#include <math.h>

int main(void)
{
	double base, height, area;

	printf("Enter the base of the triangle: ");
	scanf("%lf", &base);

	printf("Enter the height of the triangle: ");
	scanf("%lf", &height);

	area = 0.5 * base * height;

	printf("Area of the triangle = %.2f\n", area);

	return 0;
}