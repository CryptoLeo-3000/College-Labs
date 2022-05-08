#include<stdio.h>
void main()
 {
   int n,sum=0;
   printf("Enter a range for natural numbers\n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
    sum+=i;
   printf("Sum of natural numbers till %d = %d",n,sum);
 }
