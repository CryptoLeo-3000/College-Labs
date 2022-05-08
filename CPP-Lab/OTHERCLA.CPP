#include<iostream.h>
#include<conio.h>
void localclass()
 {
  class access1
   {
    public:
    void output()
     {
      cout<<"Local Class 1"<<endl;
     }
   }acc1;
  class access2
   {
    public:
    void anotheroutput()
     {
      acc1.output();
      cout<<"Successfully accessed another class"<<endl;
     }
   }acc2;
   acc2.anotheroutput();
 }
void main()
 {
  clrscr();
  localclass();
  getch();
 }