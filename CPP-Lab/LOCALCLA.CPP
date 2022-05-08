#include<iostream.h>
#include<conio.h>
void funcaccess()
 {
  class accessing
   {
    public:
    static void insideclass()
     {
      cout<<"Function inside class is accessible"<<endl;
     }
   }acc;
  acc.insideclass();
 }

void main()
 {
  clrscr();
  funcaccess();
  getch();
 }