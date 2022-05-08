#include<iostream.h>
#include<conio.h>
int n, mutex=1, full=0, empty=n;

wait(int *s)
 {
  *s-=1;
 }

signal(int *s)
 {
  *s+=1;
 }

void producer()
 {
  if(full==n)
   cout<<"Buffer is full"<<endl;
  else
   {
    wait(&empty);
    wait(&mutex);

    cout<<"Process "<<full+1<<" entered"<<endl;

    signal(&mutex);
    signal(&full);
   }
 }

void consumer()
 {
  if(empty==0)
   cout<<"This buffer is empty"<<endl;
  else
   {
    wait(&full);
    wait(&mutex);

    cout<<"Process "<<full+1<<" consumed"<<endl;

    signal(&mutex);
    signal(&empty);
   }
 }

void status()
 {
  cout<<"Buffer status:"<<endl<<endl;
  cout<<"Size of buffer: "<<n<<endl;
  for(int j=0; j<full; j++)
   cout<<"Process "<<j+1<<endl;
 }

void main()
 {
  clrscr();
  int done = 0, m;

  cout<<"Enter size of buffer"<<endl;
  cin>>n;
  CHOICES:cout<<endl<<"Enter your choice:"<<endl;
	  cout<<"1. Produce"<<endl;
	  cout<<"2. Consume"<<endl;
	  cout<<"3. Check buffer status"<<endl;
	  cout<<"4. Exit"<<endl;
	  cin>>m;
	  clrscr();

	  switch(m)
	   {
	    case 1: producer();
		    break;
	    case 2: consumer();
		    break;
	    case 3: status();
		    break;
	    case 4: goto CONT;
	   }
	  goto CHOICES;
  CONT:
  getch();
 }