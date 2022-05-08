#include<iostream.h>
#include<conio.h>

/* Question1
class Complex
 {
  int real;
  int imag;

  public:
  void input()
   {
    cout<<"Enter real part: "<<endl;
    cin>>real;
    cout<<"Enter Imaginary part: "<<endl;
    cin>>imag;
   }

  Complex operator - (Complex c2)
   {
    Complex temp;
    temp.real = real - c2.real;
    temp.imag = imag - c2.imag;
    return temp;
   }

  void output()
   {
    if(imag < 0)
     cout<<"Output Complex number: "<<endl<<real<<imag<<"i"<<endl;
    else
     cout<<"Output Complex number: "<<endl<<real<<"+"<<imag<<"i"<<endl;
   }
 };

void main()
 {
  clrscr();
  Complex c1, c2, res;
  cout<<"First complex number: "<<endl;
  c1.input();
  cout<<"Second complex number: "<<endl;
  c2.input();
  res = c1 - c2;
  res.output();
  getch();
}
*/

/* Question 2
class Increase
 {
  int i;

  public:
  Increase(int i = 0)
   {
    this->i = i;
   }

  Increase operator ++()
   {
    Increase t;
    t.i = i+100;
    return t;
   }

  void display()
   {
    cout<<"i = "<<i<<endl;
   }
 };

void main()
 {
  clrscr();
  int num;
  cout<<"Enter number to be incremented by 100: "<<endl;
  cin>>num;
  Increase i1(num);
  cout<<"Before increment: "<<endl;
  i1.display();
  Increase i2 = ++i1;
  cout<<"After increment: "<<endl;
  i2.display();
  getch();
 }
*/

/* Question 3 */
class Time
 {
  int hrs, min, sec;

  public:
  void get_time(void)
   {
    cout<<"Enter time:"<<endl;
    cout<<"Hours: "<<endl;
    cin>>hrs;
    cout<<"Minutes: "<<endl;
    cin>>min;
    cout<<"Seconds: "<<endl;
    cin>>sec;
   }

  void add_time(Time T1,Time T2)
   {
    int rem;
    sec = T1.sec+T2.sec;
    min = T1.min+T2.min;
    hrs = T1.hrs+T2.hrs;

    if(sec > 59)
     {
      rem = sec/60;
      sec -= (rem*60);
     }
    min += rem;
    if(min > 59)
     {
      rem = min/60;
      min -= (rem*60);
     }
    hrs += rem;
    if(hrs > 12)
     hrs -= 12;
  }

  void display_time()
   {
    cout<<"Time after adding: "<<endl;
    cout<<hrs<<":"<<min<<":"<<sec<<endl;
   }
 };

void main()
 {
  clrscr();
  Time T1,T2,T3;
  T1.get_time();
  T2.get_time();
  T3.add_time(T1,T2);
  T3.display_time();
  getch();
 }