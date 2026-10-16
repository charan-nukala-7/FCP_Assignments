//PROGRAM TO SWAP TOW VARIABLES USING THIRD VARIABLE. 
#include <stdio.h>

int main(void)
{
	int first, second, temp;

	printf("Enter the first variable: \n");
	scanf("%d", &first);

	printf("Enter the second variable: \n");
	scanf("%d", &second);

	temp = first;
	first = second;
	second = temp;

	printf("After swapping:\n");
	printf("First variable = %d\n", first);
	printf("Second variable = %d\n", second);

	return 0;
}