#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
 {
  char name[20], address[50];
  int rollno;

  public:
   void readata();
   void display();
 };

class marks : public student
 {
  float mark1, mark2, mark3;

  public:
   void readata();
   void display();
 };

void student :: readata()
 {
  cout<<"Enter your student's name"<<endl;
  gets(name);
  cout<<"Enter student's address"<<endl;
  gets(address);
  cout<<"Enter student's roll number"<<endl;
  cin>>rollno;
 }

void student :: display()
 {
  cout<<"Name: "<<name<<endl;
  cout<<"Address: "<<address<<endl;
  cout<<"Roll No.: "<<rollno<<endl;
 }

void marks :: readata()
 {
  student::readata();
  cout<<"Enter marks in Subject 1"<<endl;
  cin>>mark1;
  cout<<"Enter marks in Subject 2"<<endl;
  cin>>mark2;
  cout<<"Enter marks in subject 3"<<endl;
  cin>>mark3;
 }

void marks :: display()
 {
  student::display();
  cout<<"Subject 1: "<<mark1<<endl;
  cout<<"Subject 2: "<<mark2<<endl;
  cout<<"Subject 3: "<<mark3<<endl;
 }

void main()
 {
  clrscr();
  marks mk;
  mk.readata();
  mk.display();
  getch();
 }