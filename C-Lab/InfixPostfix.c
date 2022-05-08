#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void main()
 {
     char infix[20],stack[20],postfix[20],ch;
     int l,n=-1,p=-1,a,m = 0;

     printf("Enter Infix operation\n");
     scanf("%s",infix);

     l = strlen(infix);

     for(int i=0 ; i<l ; i++)
     {
         if(isalpha(infix[i]) != 0)
         {
             p += 1;
             postfix[p] = infix[i];
         }
         else
         {
             n += 1;
             stack[n] = infix[i];
                     if(stack[n] == '*' || stack[n] == '/' || stack[n] == '%')
                     {
                         do
                         {
                         if(stack [n-1] == '*' || stack[n-1] == '/' || stack[n-1] == '%')
                         {
                             p += 1;
                             postfix[p] = stack[n-1];
                             ch = stack[n];
                             stack[n-1] = ch;
                             n -= 1;
                         }
                         if(stack[n-1] == '*' || stack[n-1] == '/' || stack[n-1] == '%')
                            a = 1;
                         else
                            a=0;
                         }while(a != 0);
                     }
                     else
                     {
                         if(stack[n] == '+' || stack[n] == '-')
                         {
                             do
                             {
                                 if(stack[n-1] == '*' || stack[n-1] == '/' || stack[n-1] == '%' || stack[n-1] == '+' || stack[n-1] == '-')
                                     {
                                         p += 1;
                                         postfix[p] = stack[n-1];
                                         ch = stack[n];
                                         stack[n-1] = ch;
                                         n -= 1;
                                     }
                                     if(stack[n-1] == '*' || stack[n-1] == '/' || stack[n-1] == '%' || stack[n-1] == '+' || stack[n-1] == '-')
                                        a = 1;
                                     else
                                        a=0;
                             }while(a != 0);
                         }
                     }
                 }
     }
     while(n != -1)
     {
         p+=1;
         postfix[p] = stack[n];
         n-=1;
     }

     printf("Postfix Expression:\n");
     for(int j=0;j<=p;j++)
        printf("%c",postfix[j]);
     }
