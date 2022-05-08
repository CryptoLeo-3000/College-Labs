#include<stdio.h>
void main()
 {
     int arr[10],temp;
     printf("Enter array elements\n");
     for(int i=0;i<10;i++)
     scanf("%d",&arr[i]);

     for(int i=0;i<10;i++)
     {
         for(int j=i;j<10;j++)
         {
             if(arr[j]<=arr[i])
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
         }
     }
      printf("Modified array:\n");
     for(int k=0;k<10;k++)
     printf("%d\n",arr[k]);

 }
