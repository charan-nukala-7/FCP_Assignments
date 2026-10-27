#include<stdio.h>
int main()
{
    int a[5],key,found=0;
    for(int i=0;i<5;i++)
    {
        printf("Enter %d elements : ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter element to search : ");
    scanf("%d",&key);
    for(int i=0;i<5;i++)
    {
        if(a[i]==key)
        {
            printf("element found at index %d : ",i,a[i]);
            found=1;
            break;
        }
    }
    
        if(!found)
       {
        printf("element not found");
       }
    
    return 0;
}