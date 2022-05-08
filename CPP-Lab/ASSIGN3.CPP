#include<iostream.h>
#include<conio.h>

/* Question1
void volume(int a)
 {
  cout<<"Volume of Cube: "<<a*a*a<<endl;
 }

void volume(int r, int h)
 {
  cout<<"Volume of Cylinder: "<<3.14*r*r*h<<endl;
 }

void volume(float r, float h)
 {
  cout<<"VOlume of Cone: "<<3.14*r*r*h/3<<endl;
 }

void main()
 {
  clrscr();
  int s, r, h;
  float x, y;

  cout<<"Enter length of side of Cube"<<endl;
  cin>>s;
  volume(s);

  cout<<"Enter radius of cylinder"<<endl;
  cin>>r;
  cout<<"Enter height of cylinder"<<endl;
  cin>>h;
  volume(r, h);

  cout<<"Enter radius of cone"<<endl;
  cin>>x;
  cout<<"Enter height of cone"<<endl;
  cin>>y;
  volume(x, y);

  getch();
 }
*/

/* Question 2*/
void swap_values(int x, int y)
 {
  int temp;
    
  temp = x;
  x = y;
  y = temp;

  cout<<"Swap Values:-"<<endl;
  cout<<"a: "<<x<<endl;
  cout<<"b: "<<y<<endl<<endl;
}

void swap_pointer(int *r, int *s)
 {
  int temp;

  temp = *r;
  *r = *s;
  *s = temp;

  cout<<"Swap Values:-"<<endl;
  cout<<"a: "<<*r<<endl;
  cout<<"b: "<<*s<<endl<<endl;
 }

void swap_reference(int &n1, int &n2)
 {
  int temp;

  temp = n1;
  n1 = n2;
  n2 = temp;

  cout<<"Swap Values:-"<<endl;
  cout<<"a: "<<n1<<endl;
  cout<<"b: "<<n2<<endl<<endl;
 }

void main()
 {
  clrscr();
  int a, b;
  char nxt;
  cout<<"Enter a: "<<endl;
  cin>>a;
  cout<<"Enter b: "<<endl;
  cin>>b;

  cout<<"Swap with values: "<<endl<<endl;
  cout<<"Before Swap:-"<<endl;
  cout<<"a: "<<a<<endl;
  cout<<"b: "<<b<<endl<<endl;
  swap_values(a, b);
  cout<<"After Swap:-"<<endl;
  cout<<"New a: "<<a<<endl;
  cout<<"New b: "<<b<<endl;
  cout<<"--------------------------------------------------------------"<<endl;
  cin>>nxt;
  clrscr();

  cout<<"Swap with pointers: "<<endl<<endl;
  cout<<"Before Swap:-"<<endl;
  cout<<"a: "<<a<<endl;
  cout<<"b: "<<b<<endl<<endl;
  swap_pointer(&a, &b);
  cout<<"New a: "<<a<<endl;
  cout<<"New b: "<<b<<endl;
  cout<<"--------------------------------------------------------------"<<endl;
  cin>>nxt;
  clrscr();

  cout<<"Swap with Reference: "<<endl<<endl;
  cout<<"Before Swap:-"<<endl;
  cout<<"a: "<<a<<endl;
  cout<<"b: "<<b<<endl<<endl;
  swap_reference(a, b);
  cout<<"New a: "<<a<<endl;
  cout<<"New b: "<<b<<endl;
  cout<<"--------------------------------------------------------------"<<endl;

  getch();
 }