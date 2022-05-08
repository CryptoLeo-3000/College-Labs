#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()
 {
  clrscr();

  char string1[20],string2[20];
  cout<<"Enter string 1"<<endl;
  cin>>string1;
  cout<<"Enter string 2"<<endl;
  cin>>string2;

  if(strcmp(string1, string2) == 0)
   cout<<"Both the strings are same"<<endl;
  else
   cout<<"Both strings are not same"<<endl;

  getch();
 }