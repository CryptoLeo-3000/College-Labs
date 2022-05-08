#include<iostream.h>
#include<conio.h>

/* Question 1
template <class T>
T larger(T m, T n)
 {
  if(m > n)
   return m;
  else
   return n;
 }

void main()
 {
  clrscr();
  float m, n;

  cout<<"Enter two numbers: "<<endl;
  cout<<"Enter Number one: "<<endl;
  cin>>m;
  cout<<"Enter Number two: "<<endl;
  cin>>n;
  cout<<larger(m, n)<<" is larger."<<endl;

  getch();
}
*/

/* Question 2
template <class T>
T swapping(T &m, T &n)
 {
  T temp;
  temp = m;
  m = n;
  n = temp;
 }

void main()
 {
  clrscr();
  float m, n;

  cout<<"Enter two numbers to swap: "<<endl;
  cout<<"Enter Number one: "<<endl;
  cin>>m;
  cout<<"Enter Number two: "<<endl;
  cin>>n;

  cout<<"Before Swapping: "<<endl;
  cout<<"m = "<<m<<endl;
  cout<<"n = "<<n<<endl;
  swapping(m, n);
  cout<<"After Swapping: "<<endl;
  cout<<"m = "<<m<<endl;
  cout<<"n = "<<n<<endl;

  getch();
}
*/

/* Question 3*/
template <class T, class X>
T printing(T m, X n)
 {
  cout<<"One number = "<<m<<endl;
  cout<<"Second Number = "<<n<<endl;
 }

void main()
 {
  clrscr();
  float m;
  int n;

  cout<<"Enter two numbers: "<<endl;
  cout<<"Enter Number one: "<<endl;
  cin>>m;
  cout<<"Enter Number two: "<<endl;
  cin>>n;

  printing(m, n);

  getch();
}

/*Question 4
template <class T>
T operation(T m, T n, T num)
 {
  if(num ==1)
   return m+n;
  else if(num == 2)
   return m-n;
  else if(num == 3)
   return m*n;
  else if(num == 4)
   return m/n;
 }

void main()
 {
  clrscr();
  int m, n;
  int op;

  ABC:
  cout<<"Enter operation to be performed: "<<endl;
  cout<<"1. Addition"<<endl;
  cout<<"2. Subtraction"<<endl;
  cout<<"3. Multiplication"<<endl;
  cout<<"4. Division"<<endl;
  cin>>op;

  if(op < 1 || op > 4)
  goto ABC; x

  cout<<"Enter values for operation "<<endl;
  cout<<"Enter value 1"<<endl;
  cin>>m;
  cout<<"Enter value 2"<<endl;
  cin>>n;

  switch(op)
   {
    case 1:cout<<"Sum = "<<operation(m, n, 1)<<endl;
    break;
    case 2:cout<<"Difference = "<<operation(m, n, 2)<<endl;
    break;
    case 3:cout<<"Product = "<<operation(m, n, 3)<<endl;
    break;
    case 4:cout<<"Result = "<<operation(m, n, 4)<<endl;
    break;
    default:cout<<"Choose again"<<endl;
   }

  getch();
}
*/