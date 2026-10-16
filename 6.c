////PROGRAM TO SWAP TOW VARIABLES USING THIRD VARIABLE. 
#include <stdio.h>

int main(void)
{
	int first, second;

	printf("Enter the first variable: \n");
	scanf("%d", &first);

	printf("Enter the second variable: \n");
	scanf("%d", &second);

	first = first + second;
	second = first - second;
	first = first - second;

	printf("After swapping:\n");
	printf("First variable = %d\n", first);
	printf("Second variable = %d\n", second);

	return 0;
}