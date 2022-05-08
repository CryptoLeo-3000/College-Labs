#include<iostream.h>
#include<conio.h>

/* Question 1
void main()
 {
  clrscr();
  int x;
  int *arr = new int(10);
  cout<<"Array Elements: "<<endl;
  for (x = 0; x < 10; x++)
   {
    cin>>arr[x];
   }
  cout<<endl<<"Array: "<<endl;
  for (x = 0; x < 10; x++)
   {
    cout<<arr[x]<<endl;
   }
  delete[] arr;
  getch();
 }
*/

/* Question 2
#include<iostream.h>
#include<conio.h>
#define simple_int(prin, rt, time) prin*rt*time/100
void main()
 {
  clrscr();
  int p, r, t;
  cout<<"Enter principal amount: "<<endl;
  cin>>p;
  cout<<"Enter Rate of Interest: "<<endl;
  cin>>r;
  cout<<"Enter Time: "<<endl;
  cin>>t;
  cout<<"Simple Interest = "<<simple_int(p, r, t)<<endl;
  getch();
 }
*/

/* Question 3*/
#include<iostream.h>
#include<conio.h>

#define Addition(a, b) cout<<"Sum = "<<a+b<<endl;

inline void Subtraction(float a, float b)
 {
  cout<<"Difference = "<<a-b<<endl;
 }

void Division(float a, float b)
 {
  cout<<"Result = "<<a/b<<endl;
 }

void Multiplication(float a, float b)
 {
  cout<<"Product = "<<a*b<<endl;
 }

void main()
 {
  clrscr();
  float m, n;
  int op;
  cout<<"Enter your option: "<<endl;
  cout<<"1.Addition"<<endl;
  cout<<"2.Subtraction"<<endl;
  cout<<"3.Division"<<endl;
  cout<<"4.Multiplication"<<endl;
  cin>>op;

  cout<<"Enter first value:"<<endl;
  cin>>m;
  cout<<"Enter second value:"<<endl;
  cin>>n;

  switch(op)
   {
    case 1:Addition(m, n);
    break;
    case 2:Subtraction(m, n);
    break;
    case 3:Division(m, n);
    break;
    case 4:Multiplication(m, n);
    break;
    default:"Operation not available";
   }
  getch();
 }