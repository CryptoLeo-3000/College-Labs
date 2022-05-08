#include<iostream.h>
#include<conio.h>
template <class T>
T add(T num)
 {
  static sum = 0;
  sum += num;
  num = sum;
  return num;
 }

void main()
 {
  clrscr();
  int m;
  float n, sum;
  cout<<"Enter the number of numbers to be added"<<endl;
  cin>>m;
  while(m != 0)
   {
    cout<<"Enter number"<<endl;
    cin>>n;
    sum = add(n);
    m -= 1;
   }
  cout<<"Sum = "<<sum<<endl;
  getch();
 }