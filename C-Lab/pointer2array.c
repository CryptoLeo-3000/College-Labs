#include<stdio.h>
void main()
 {
     int arr[100],n,*ptr;

     printf("Entered number of elements to be entered\n");
     scanf("%d",&n);

     printf("Enter elements of matrix\n");
     for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    ptr=arr;

    for(int j=0;j<n;j++)
        printf("%d - %d\n",ptr,*ptr);
 }
