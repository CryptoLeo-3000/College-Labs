#include<iostream.h>
#include<conio.h>
static int g=5;
void fn()
 {
  static int i = 0;
  cout<<"g = "<<g--<<"\t"<<"i = "<<i++<<endl;
 }
void main()
 {
  clrscr();
  while(g >= 2)
   fn();
  getch();
 }
