#include<iostream.h>
#include<conio.h>
void recur(int range)
 {
     static int a=0, b=1, c;
     c = a+b;
     cout<<c<<"\t";
     a = b;
     b = c;
     recur(range-1);
 }
void main()
 {
  clrscr();
  int range;
  cout<<"Enter range for fibonaaci series\n";
  cin>>range;
  recur(range);
  getch();
 }