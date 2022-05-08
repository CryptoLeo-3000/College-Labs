#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int no_read = 0, no_write = 0, read_track = 0, write_track = 0;
char buffer[500];

wait(int *s)
 {
  *s-=1;
 }

signal(int *s)
 {
  *s+=1;
 }

class monitor
 {
  public:

  void readerenter()
   {
    if(no_read > 0 || no_read == 0 && no_write == 0)
     {
      ++no_read;
      wait(&read_track);
      cout<<"Reader "<<no_read<<":"<<endl;
      cout<<buffer<<endl;
      signal(&read_track);
     }
    else if(no_write>0)
     cout<<"Writing in progress please wait"<<endl;
   }

  void readerexit()
   {
    if(no_read > 0)
     --no_read;
    if(no_read==0)
     cout<<"No read in progress"<<endl;
   }

  void writerenter()
   {
    if(no_read>0)
     cout<<"Reading in progress. Writers not allowed"<<endl;
    else if(no_write == 0 && no_read == 0)
     {
      ++no_write; 
      wait(&write_track);
      cout<<"Input:"<<endl;
      gets(buffer);
      signal(&write_track);
     }
    else if(no_write == 1)
     cout<<"Only one writer allowed"<<endl;
   }

  void writerexit()
   {
    if(no_write == 1)
     --no_write;
    if(no_write == 0)
     cout<<"No write in progress"<<endl;
   }
 }mon;

void status()
 {
  cout<<"Buffer contents:"<<endl;
  cout<<buffer<<endl<<endl;

  if(no_read>0)
   cout<<"System is in read mode with "<<no_read<<" readers"<<endl;
  else if(no_write>0)
   cout<<"System is in write mode with "<<no_write<<" writers"<<endl;
  else
   cout<<"System is in neutral mode with no readers or writers"<<endl;
 }

void main()
 {
  clrscr();
  int m;

  CHOICES:cout<<endl<<"Enter your choice:"<<endl;
	  cout<<"1. Enter read mode"<<endl;
	  cout<<"2. Exit read mode"<<endl;
	  cout<<"3. Enter write mode"<<endl;
	  cout<<"4. Exit write mode"<<endl;
	  cout<<"5. Status"<<endl;
	  cout<<"6. Exit"<<endl;
	  cin>>m;
	  clrscr();

	  switch(m)
	   {
	    case 1: mon.readerenter();
		    break;
	    case 2: mon.readerexit();
		    break;
	    case 3: mon.writerenter();
		    break;
	    case 4: mon.writerexit();
		    break;
	    case 5: status();
		    break;
	    case 6: goto CONT;
	   }
	  goto CHOICES;
  CONT:
  getch();
 }