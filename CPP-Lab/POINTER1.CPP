#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int a = 10;
  int *b;
  b = &a;
  cout<<"b = "<<b<<endl;
  cout<<"*b = "<<*b<<endl;
  cout<<"&b = "<<&b<<endl;
  cout<<"*&b = "<<*&b<<endl;
  getch();
 }