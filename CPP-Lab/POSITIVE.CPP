#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int n, sum=0;
  cout<<"Enter number"<<endl;
  cin>>n;
  do
   {
    sum+=n;

    cout<<"Enter number"<<endl;
    cin>>n;
   }while(n>=0);
  cout<<"Sum of all numbers entered : "<<sum<<endl;
  getch();
 }