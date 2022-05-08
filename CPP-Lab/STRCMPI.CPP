#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
 {
  clrscr();

  char string1[10], string2[10];
  cout<<"Enter string 1"<<endl;
  cin>>string1;
  cout<<"Enter string 2"<<endl;
  cin>>string2;

  if(strcmpi(string1, string2) == 0)
   cout<<"Both strings are same"<<endl;
  else
   cout<<"Strings are not same"<<endl;

  getch();
 }