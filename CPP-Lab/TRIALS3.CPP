#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Candidate
 {
  int registration_no;
  char candidate_name[30], grade;
  float aggregate_marks;
  void setgrade()
   {
    if(aggregate_marks >= 90)
     grade = 'A';
    else if(aggregate_marks >=70 && aggregate_marks<90)
     grade = 'B';
    else if(aggregate_marks >=65 && aggregate_marks<70)
     grade = 'C';
    else
     grade = 'D';
   }

   public:
    Candidate(int reg_no, char name[30], float avg)
     {
      registration_no = reg_no;
      candidate_name = name;
      aggregate_marks = avg;
     }
    void display_result()
     {
      cout<<"Candidate Name: "<<candidate_name<<endl;
      cout<<"Registeration Number: "<<registration_no<<endl;
      cout<<"Aggregate Marks: "<<aggregate_marks<<endl;
      cout<<"Grade: "<<grade<<endl;
     }
 };

void main()
 {
  clrscr();
  char name[30];
  int num;
  float avg;
  cout<<"Enter Candidate name"<<endl;
  gets(name);
  cout<<"Enter registeration number"<<endl;
  cout<<num;
  cout<<"Enter aggregate marks"<<endl;
  cout<<avg;
  Candidate cd(num, name, avg);
  cd.display_result();
  getch();
 }