// 12. PROGRAM TO PRINT ASCII CODE OF ANY CHARACTER
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("ASCII code of %c = %d\n", ch, ch);

    return 0;
}
