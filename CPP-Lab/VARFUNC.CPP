#include<iostream.h>
#include<conio.h>
class various {
  int m;

  public:
  various()
   {
    m = 15;
   }
  static void variousfunc()
   {
    cout<<"This is a static function"<<endl;
   }
  void constfunc() const
   {
    cout<<"Value of m = "<<m<<endl;
   }
  inline void cube(int s = 10)
   {
    cout<<"Volume of cube = "<<s*s*s<<endl;
   }
  friend void frfunc(various&);
 };

void frfunc(various& n)
 {
  cout<<"Name of friend: "<<n.m<<endl;
 }
void main()
 {
  clrscr();
  various v;
  const various v1;
  v.variousfunc();
  v1.constfunc();
  v.cube(20);
  frfunc(v);
  getch();
 }