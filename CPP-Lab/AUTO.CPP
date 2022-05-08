#include<iostream.h>
#include<conio.h>
int sum(int n1, int n2)
 {
  auto int s;
  s = n1 + n2;
  return s;
 }
void main()
 {
  clrscr();
  int i=2, j=3, k;
  k = sum(i, j);
  cout<<"Sum is : "<<k;
  getch();
 }