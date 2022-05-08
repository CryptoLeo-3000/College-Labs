#include<stdio.h>
void main()
 {
   int arr[100],n,e,m=0;
   printf("Enter number of elements\n");
   scanf("%d",&n);
   printf("Enter array elements\n");
   for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
   printf("Enter array element to be searched");
   scanf("%d",&e);
   for(int j=0;j<n;j++)
    if(arr[j]==e)
    {
        m=1;
        printf("Element found at %d position",(j+1));
        break;
    }
   if(m==0)
    printf("Element notfound");
 }
