#include<iostream.h>
#include<conio.h>

#define addition(a, b) cout<<"Sum = "<<a+b<<endl;
#define subtraction(a, b) cout<<"Difference = "<<a-b<<endl;
//Macros

inline void division(int a,int b)
 {
  cout<<"Answer = "<<a/b<<endl;
 }
inline void multiplication(int a,int b)
 {
  cout<<"Product = "<<a*b<<endl;
 }

void main()
 {
  clrscr();
  int x, y;
  cout<<"Enter first variable"<<endl;
  cin>>x;
  cout<<"Enter second variable"<<endl;
  cin>>y;
  addition(x, y);
  subtraction(x, y);
  division(x, y);
  multiplication(x, y);
  getch();
 }

/*Macros are more useful as these are scanned by the compiler before the execution of he program
and also the type of arguement declaration is not necessary hence the programmer
can freely use it without the worries for the type of variable to be passed
as arguement*/