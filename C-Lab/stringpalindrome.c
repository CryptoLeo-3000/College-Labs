#include<stdio.h>
#include<string.h>
void palindrome(char str[50],int l)
 {
     int m=0;
     for(int i=0;i<l/2;i++)
     {
         if(str[i]==str[l-i-1])
         {
             continue;
         }
         else
         {
             m=1;
             break;
         }
     }

     if(m==0)
        printf("String entered is a Palindrome\n");
     else
        printf("String entered is not a Palindrome\n");
 }

 void main()
  {
      char st[100];
      int l;

      printf("Enter a word\n");
      scanf("%s",st);

      l=strlen(st);

      palindrome(st,l);
  }
