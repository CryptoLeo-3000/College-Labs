#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
/*Question 1
class A;

class B
 {
  int b;
  public:
  void input()
   {
    cout<<"Value of B:"<<endl;
    cin>>b;
   }
  void max(A& x, B& y);
 };

class A
 {
  int a;
  public:
  void input()
   {
    cout<<"Value of A:"<<endl;
    cin>>a;
   }
  friend void B::max(A& x, B& y);
 };

void B::max(A& x, B& y)
 {
  if(x.a > y.b)
   cout<<"Sum = "<<x.a+y.b<<endl;
  else
   cout<<"Difference = "<<y.b-x.a<<endl;
 }

void main()
 {
  clrscr();
  A x;
  B y, z;
  x.input();
  y.input();
  z.max(x, y);
  getch();
 }
*/

/*Question2
class Student
 {
  char name[20];
  int m1, m2, m3;

  public:
  void input(int m1, int m2, int m3)
   {
    cout<<"Enter your name:"<<endl;
    gets(name);
    this->m1 = m1;
    this->m2 = m2;
    this->m3 = m3;
   }
  void display()
   {
    cout<<"Name: "<<name<<endl;
    cout<<"Subject1: "<<m1<<endl;
    cout<<"Subject2: "<<m2<<endl;
    cout<<"Subject3: "<<m3<<endl;
   }
 };

void main()
 {
  clrscr();
  Student st;
  st.input(80, 90, 97);
  st.display();
  getch();
 }
*/

/* Question3
class electricity
 {
  int id, nunits, total;
  char name[20];

  public:
  void read();
  void display();
  void cal_tariff();
 };

void electricity::read()
 {
  cout<<"Enter you ID:"<<endl;
  cin>>id;
  cout<<"Enter your name"<<endl;
  gets(name);
  cout<<"Enter number of units consumed:"<<endl;
  cin>>nunits;
  total = 0;
 }

void electricity::display()
 {
  cout<<"Name: "<<name<<endl;
  cout<<"ID: "<<id<<endl;
  cout<<"No. of Units: "<<nunits<<endl;
  cout<<"Total: "<<total<<endl;
 }

void electricity::cal_tariff()
 {
  if(nunits <= 100)
   total = total + 5*nunits;
  else if(nunits >100 && nunits<=200)
   total = total + 500 + 7*(nunits-100);
  else
   total = total +500 + 700 + 12*(nunits-200);
 }

void main()
 {
  clrscr();
  electricity et;
  et.read();
  et.cal_tariff();
  et.display();
  getch();
 }
*/