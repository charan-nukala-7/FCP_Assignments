// PROGRAM TO PRINT THE REVERSE OF A GIVEN NUMBER
#include <stdio.h>

int main(void)
{
	char number[100];
	int length = 0;

	printf("Enter a number: ");
	scanf("%99s", number);

	while (number[length] != '\0')
		length++;

	printf("Reverse of the number = ");
	for (int index = length - 1; index >= 0; index--)
		putchar(number[index]);
	putchar('\n');

	return 0;
}
