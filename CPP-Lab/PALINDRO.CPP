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
    new_n = new_n*10 + n%10;
    n/=10;
   }

   if(temp==new_n)
    cout<<temp<<" is a palindrome number"<<endl;
   else
    cout<<temp<<" is not a palin	drome number"<<endl;
  getch();
 }