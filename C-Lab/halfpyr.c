#include<stdio.h>
void main()
 {
     int n,a=1;
     printf("Enter number of rows\n");
     scanf("%d",&n);

     for(int i=1;i<=n;i++)
     {
         for(int k=1;k<=i;k++)
            {
                printf("%d  ",a);
                ++a;
            }
            printf("\n");
     }
 }
