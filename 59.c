#include <stdio.h>
int main()
{
   int a[5],key, count=0, i,j;
   for(i=0;i<5;i++)
   {
    printf("Enter %d elements : ",i);
    scanf("%d",&a[i]);
   }
   printf("enter element to count : ");
   scanf("%d",&key);
   for (i=0;i<5;i++)
   {
    if (a[i]==key)
    {
        count++;
    }
 }

    printf("element reoccured %d ",count);
    return 0;
}
   