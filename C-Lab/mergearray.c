#include<stdio.h>
void main()
 {
   int arr[100],brr[100],a,b,k=0;
   printf("Enter number of elements in array1\n");
   scanf("%d",&a);
   printf("Enter number of elements in array2\n");
   scanf("%d",&b);

   printf("Enter array1 elements\n");
   for(int i=0;i<a;i++)
    scanf("%d",&arr[i]);

   printf("Enter array2 elements\n");
   for(int j=0;j<b;j++)
    scanf("%d",&brr[j]);

    int crr[a+b];

   for(int m=0;m<a;m++)
   {
        crr[k]=arr[m];
        ++k;
   }

    for(int n=0;n<b;n++)
   {
        crr[k]=brr[n];
        ++k;
   }
    printf("Array:\n");
     for(int l=0;l<a+b;l++)
     printf("%d\n",crr[l]);

   }
