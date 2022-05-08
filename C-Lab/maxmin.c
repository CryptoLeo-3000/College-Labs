#include<stdio.h>
void main()
 {
   int arr[100],n;
   printf("Enter number of elements\n");
   scanf("%d",&n);
   printf("Enter array elements\n");
   for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
   int max=arr[0];
   int min=arr[0];
   for(int j=0;j<n;j++)
    {
      if(arr[j]>max)
       max=arr[j];
      if(arr[j]<min)
       min=arr[j];
    }
    printf("Maximum element:%d\n",max);
    printf("Minimum element:%d\n",min);
 }
