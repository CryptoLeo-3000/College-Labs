#include<iostream.h>
#include<conio.h>
void sumavg(float arr[10])
 {
  float sum = 0;
  for(int i=0; i<10; i++)
   sum += arr[i];
  cout<<"Sum of Marks of Class = "<<sum<<endl;
  cout<<"Average of Marks of class = "<<sum/10<<endl;
 }
void main()
 {
  clrscr();
  float marks[10];
  cout<<"Enter marks of students"<<endl;
  for(int i=0; i<10; i++)
   cin>>marks[i];
  sumavg(marks);
  getch();
 }