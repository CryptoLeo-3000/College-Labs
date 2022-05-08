#include<iostream.h>
#include<conio.h>
void calc()
 {
 }
void fileman()
 {
 }
void games()
 {
 }
void shopp()
 {
 }
void travel()
 {
 }
void main()
 {
   clrscr();
   int n;
   do
    {
      cout<<"Enter your choice:\n";
      cout<<"1.Calculator\n";
      cout<<"2.File Management\n";
      cout<<"3.Games\n";
      cout<<"4.Shopping\n";
      cout<<"5.Travelling\n";
      cin>>n;

      switch(n)
       {
	 case 1:calc();
	 break;
	 case 2:fileman();
	 break;
	 case 3:games();
	 break;
	 case 4:shopp();
	 break;
	 case 5:travel();
	 break;
	 default:cout<<"Inappropriate Option\n";
       }
      cout<<"Do you want to continue?0 - No or 1 - Yes";
      cin>>n;
    }while(n != 0);
   cout<<"Thank You for using Me:)\n";
   getch();
 }