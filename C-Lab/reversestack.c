#include<stdio.h>
int rstack[20];
int push(int top,int stack[20])
 {
     int n;

     printf("Enter element to be pushed\n");
     scanf("%d",&n);

     top += 1;
     stack[top] = n;

     if(top >= 20)
        printf("Stack Overflow\n");
     else
     {

     printf("Stack elements\n");
     for(int i=0;i<top+1;i++)
     {
         printf("%d\n",stack[i]);
     }
     }
     return top;
 }
 void reverse(int top , int stack[20])
 {
     int temp;
     for(int i=0;i<=top;i++)
     {
         temp = stack[top-i];
         rstack[i] = temp;
     }

     printf("Reversed Stack:\n");
     for(int j=0;j<=top;j++)
     {
         printf("%d\t",rstack[j]);
     }
 }

 void main()
 {
     int top = -1 , stack[20],n,m,a;

     while(a != 0)
     {
        printf("Enter your choice\n");
     printf("1.Push\n");
     printf("2.Reverse\n");
     scanf("%d",&m);

     switch(m)
      {
          case 1:top = push(top , stack);
                 break;
          case 2:reverse(top , stack);
                 break;
          default:printf("Invalid Choice\n");
      }

      printf("\nDo you want to continue?(0 - NO & 1 - YES)\n");
      scanf("%d",&a);
     }
 }
