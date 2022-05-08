#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
 {
   clrscr();
   int marks;
   char grades;
   cout<<"Enter Marks"<<endl;
   cin>>marks;

   if(marks>=90)
    grades = 'A';
   else if(marks>=80 && marks<90)
    grades = 'B';
   else if(marks>=70 && marks<80)
    grades = 'C';
   else if(marks>=60 && marks<70)
    grades = 'D';
   else if(marks>=50 && marks<60)
    grades = 'E';
   else
    grades = 'F';

   switch(grades)
    {
     case 'A':cout<<"Excellent"<<endl;
     break;
     case 'B':cout<<"Very Good"<<endl;
     break;
     case 'C':cout<<"Good"<<endl;
     break;
     case 'D':cout<<"Average"<<endl;
     break;
     case 'E':cout<<"Okay"<<endl;
     break;
     case 'F':cout<<"Fail"<<endl;
     break;
     default:cout<<"Enter a proper grade"<<endl;
    }
   getch();
 }