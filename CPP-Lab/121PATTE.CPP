#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int n;
  cout<<"Enter number of lines"<<endl;
  cin>>n;

  for(int i=1; i<=n; i++)
   {
    for(int k=i; k<=n; k++)
     cout<<" ";
    for(int j=1; j<=i; j++)
     {
      cout<<j;
      if(j==i)
       {
	for(int m=j-1; m>0; m--)
	 {
	  cout<<m;
	 }
       }
     }
    cout<<endl;
   }
  getch();
 }