#include<stdio.h>
void multiply(int a[3][3],int b[3][3])
 {
   int c[3][3];
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           int sum=0;
        for(int k=0;k<3;k++)
        sum+=(a[i][k]*b[k][i]);
        c[i][j]=sum;
       }
   }
     printf("New Array:\n");
     for(int k=0;k<3;k++)
     {
       for(int l=0;l<3;l++)
        printf(" %d ",c[k][l]);
        printf("\n");
    }
}
void main()
 {
   int a[3][3],b[3][3];
   printf("Enter elements of matrix 1\n");
   for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
     scanf("%d",&a[i][j]);

      printf("Enter elements of matrix 2\n");
   for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
     scanf("%d",&b[i][j]);

     multiply(a,b);
}
