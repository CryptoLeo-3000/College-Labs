#include<iostream.h>
#include<conio.h>
void callvalue(int a, int b)
 {
  int temp;
  temp = a;
  a = b;
  b = temp;
 }
void callref(int &a, int &b)
 {
  a += 1;
  b += 1;
 }
void callpoint(int *a, int *b)
 {
  *a += *b;
  *b += *a;
 }
void main()
 {
  clrscr();
  int x, y;
  cout<<"--------------------"<<endl;
  cout<<"Call by Value:"<<endl;
  cout<<"Enter first value\n"<<endl;
  cin>>x;
  cout<<"Enter second value\n"<<endl;
  cin>>y;
  cout<<"Before swap:"<<x<<"\t"<<y<<endl;
  callvalue(x, y);
  cout<<"After swap:"<<x<<"\t"<<y<<endl;
  cout<<"--------------------"<<endl;
  cout<<"Call by Reference:"<<endl;
  cout<<"Enter first value\n"<<endl;
  cin>>x;
  cout<<"Enter second value\n"<<endl;
  cin>>y;
  cout<<"Before Increment:"<<x<<"\t"<<y<<endl;
  callref(x, y);
  cout<<"After Increment:"<<x<<"\t"<<y<<endl;
  cout<<"--------------------"<<endl;
  cout<<"Call by Pointer:"<<endl;
  cout<<"Enter first value\n"<<endl;
  cin>>x;
  cout<<"Enter second value\n"<<endl;
  cin>>y;
  cout<<"Before Addition:"<<x<<"\t"<<y<<endl;
  callpoint(&x, &y);
  cout<<"After Addition:"<<x<<"\t"<<y<<endl;
  getch();
 }