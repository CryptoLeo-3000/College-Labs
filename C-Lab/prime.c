#include<stdio.h>
void main()
 {
   int n,m=0;
   printf("Enter prime number\n");
   scanf("%d",&n);
   for(int i=2;i<n;i++)
    {
      if(n%i==0)
      {
       m=1;
       break;
      }
    }
    if(m==1)
     printf("Number is prime");
    else
     printf("Number is not prime");
    }
