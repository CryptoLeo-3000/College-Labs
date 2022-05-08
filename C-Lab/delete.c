#include<stdio.h>
void main()
 {
   int arr[100],n,e,m=0;
   printf("Enter number of elements\n");
   scanf("%d",&n);

   printf("Enter array elements\n");
   for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

   printf("Enter array element to be deleted");
   scanf("%d",&e);

   for(int j=0;j<n;j++)
    if(arr[j]==e)
    {
        for(int k=j;k<n;k++)
            arr[j]=arr[j+1];
        m=1;
    }
    if(m==0)
        printf("Element not found");
    else
     printf("Modified array:\n");
     for(int l=0;l<n-1;l++)
     printf("%d\n",arr[l]);
 }
