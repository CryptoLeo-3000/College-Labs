#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int a, b, c;
  cout<<"Enter first numbers:";
  cin>>a;
  cout<<"Enter second numbers:";
  cin>>b;
  cout<<"Enter third numbers:";
  cin>>c;

  if(a>b)
  {
   if(a>c)
    cout<<"Largest number is "<<a<<endl;
   else
    cout<<"Largest number is "<<c<<endl;
  }
  else
  {
   if(b>c)
    cout<<"Largest number is "<<b<<endl;
   else
    cout<<"Largest number is "<<c<<endl;
  }
  getch();
 }
