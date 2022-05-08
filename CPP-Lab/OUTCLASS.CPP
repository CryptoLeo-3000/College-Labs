#include<iostream.h>
#include<conio.h>

class accessing
 {
  public:
  static void staticfunc()
   {
    cout<<"Static function is accessible"<<endl;
   }
 }acc;

void main()
 {
  clrscr();
  cout<<acc.i<<endl;
  acc.staticfunc();
  getch();
 }