#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  register int n = 20;
  int *ptr;
  ptr = &n;
  cout<<"address of n : "<<ptr<<endl;
  getch();
 }