#include<iostream.h>
#include<conio.h>
class employee {
 public:
 char empId[10];
 double salary, hours;

 void getInfo()
  {
  cout<<"Enter Employee ID"<<endl;
  cin>>empId;
  cout<<"Enter Salary"<<endl;
  cin>>salary;
  cout<<"Enter the Number of Hours in a day"<<endl;
  cin>>hours;
  }
 double AddSal()
  {
   if(salary < 500)
    salary += 10;
   return salary;
  }
 double AddWork()
  {
   if(hours >= 6)
    salary += 5;
   return salary;
  }
 void display_details()
  {
   cout<<"Employee ID: "<<empId<<endl;
   cout<<"Salary: "<<salary<<endl;
   cout<<"Hours worked per day: "<<hours<<endl;
  }
 }emp;
void main()
 {
  clrscr();
  emp.getInfo();
  emp.AddSal();
  emp.AddWork();
  clrscr();
  emp.display_details();
  getch();
 }