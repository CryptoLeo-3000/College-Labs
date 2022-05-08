#include<stdio.h>

int push(int top,int stack[20])
 {
     int n;

     printf("Enter element to be pushed\n");
     scanf("%d",&n);

     top += 1;

     if(top >= 20)
        printf("Stack Overflow\n");
     else
     {
         stack[top] = n;
     printf("Stack elements\n");
     for(int i=0;i<top+1;i++)
     {
         printf("%d\n",stack[i]);
     }
     }
     return top;
 }

int pop(int top , int stack[20])
 {
     top -= 1;

     if(top <= -1)
        printf("Stack Underflow");
     else{

     printf("Stack elements\n");
     for(int i=0;i<=top;i++)
     {
         printf("%d ",stack[i]);
     }
     }
     return top;
 }

void peek(int top , int stack[20])
 {
     printf("First Element of stack = %d",stack[top]);
 }

void main()
 {
     int top = -1 , stack[20],n,m,a;

     while(a != 0)
     {
        printf("Enter your choice\n");
     printf("1.Push\n");
     printf("2.Pop\n");
     printf("3.Peek\n");
     scanf("%d",&m);

     switch(m)
      {
          case 1:top = push(top , stack);
                 break;
          case 2:top = pop(top , stack);
                 break;
          case 3:peek(top , stack);
                 break;
          default:printf("Invalid Choice\n");
      }

      printf("\nDo you want to continue?(0 - NO & 1 - YES)\n");
      scanf("%d",&a);
     }
 }
