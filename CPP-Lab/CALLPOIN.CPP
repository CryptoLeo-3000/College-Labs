#include<iostream.h>
#include<conio.h>
void swap(int *x, int *y)
 {
  int t;
  t = *x;
  *x = *y;
  *y = t;

  cout<<"Swapped Values:\n a="<<x<<"\tb="<<y<<endl;
 }
void main()
 {
  clrscr();
  int a, b;
  cout<<"Enter value of a"<<endl;
  cin>>a;
  cout<<"Enter value of b"<<endl;
  cin>>b;
  cout<<"Actual Values\na="<<a<<"\tb="<<b<<endl;
  swap(&a, &b);
  cout<<"After swap Values\na="<<a<<"\tb="<<b<<endl;
  getch();
 }