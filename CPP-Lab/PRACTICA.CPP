#include<iostream.h>
#include<conio.h>
class Student {
 public:
 char name[20];
 int rollno;
 char div;
 char id[10];
 double m1, m2, m3;

 void accept_details()
  {
   cout<<"Enter Name:"<<endl;
   cin>>name;
   cout<<"Enter RollNo.:"<<endl;
   cin>>rollno;
   cout<<"Enter Division"<<endl;
   cin>>div;
   cout<<"Enter ID:"<<endl;
   cin>>id;
   cout<<"Enter Marks in First Subject"<<endl;
   cin>>m1;
   cout<<"Enter Marks in Second Subject"<<endl;
   cin>>m2;
   cout<<"Enter Marks in Third Subject"<<endl;
   cin>>m3;
  }
 double average_marks()
  {
   return (m1+m2+m3)/3;
  }
 void display_details()
  {
   cout<<"Name: "<<name<<endl;
   cout<<"Roll No.: "<<rollno<<endl;
   cout<<"Division: "<<div<<endl;
   cout<<"ID: "<<id<<endl;
   cout<<"Subject 1: "<<m1<<endl;
   cout<<"Subject 2: "<<m2<<endl;
   cout<<"Subject 3: "<<m3<<endl;
   cout<<"Average: "<<average_marks()<<endl;
  }
 }St;
void main()
 {
  clrscr();
  St.accept_details();
  clrscr();
  St.display_details();
  getch();
 }