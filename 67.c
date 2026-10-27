#include <stdio.h>
int max(int a[],int n)
{
    int m = a[0];
    for(int i =1;i<n;i++)
    {
        if(a[i]>m)
          m=a[i];
    }
  return m;
}
int main()
{
    int a[100], n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      printf("Enter the elements: ");
      scanf("%d",&a[i]);
      printf("Maximum element is: %d\n",max(a,n));     
    }
    return 0;
}