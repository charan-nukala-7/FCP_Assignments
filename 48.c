//PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE ARRAYS. 
#include <stdio.h>
int main()
{
    int array1[10], array2[10], temp;
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

    // Swapping values of the two arrays
    for (i = 0; i < 10; i++)
    {
        temp = array1[i];
        array1[i] = array2[i];
        array2[i] = temp;
    }

    printf("After swapping, the first array is:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\n");

    printf("After swapping, the second array is:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0;
}