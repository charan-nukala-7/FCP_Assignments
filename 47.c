/*PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE ARRAYS INTO THIRD*/
#include <stdio.h>

int main()
{
    int array1[10], array2[10], array3[10];
    int i;

    printf("Enter 10 integers for the first array:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter 10 integers for the second array:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array2[i]);
    }

    for (i = 0; i < 10; i++)
    {
        array3[i] = array1[i] + array2[i];
    }

    printf("The sum of the two arrays is:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array3[i]);
    }
    printf("\n");

    return 0;
}
