#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int n, new_n=0, temp;
  cout<<"Enter a number"<<endl;
  cin>>n;
  temp=n;

  while(n>0)
   {
    new_n = new_n + n%10;
    n/=10;
   }

  cout<<"Sum of digits : "<<new_n<<endl;
  getch();
 }