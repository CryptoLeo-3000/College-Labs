#include<iostream.h>
#include<conio.h>
int blocksize[100], processsize[100], allot[100];


void firstfit()
 {
  for(int i=0; i<4; i++)
   {
    for(int j=0; j<5; j++)
     {
      if(blocksize[j] > processsize[i] || blocksize[j] == processsize[i])
       {
	blocksize[j] -= processsize[i];
	allot[i] = j+1;
	break;
       }
     }
   }

  cout<<"Blocks Alloted: "<<endl;
  for(i=0; i<4; i++)
   cout<<allot[i]<<endl;
 }

void main()
 {
  clrscr();

  int m, n;

  cout<<"Enter no. of blocks"<<endl;
  cin>>n;
  cout<<"Enter no. of processes"<<endl;
  cin>>m;

  clrscr();
  cout<<"Enter blocks: "<<endl;
  for(int i=0; i<n; i++)
   {
    cout<<"Block "<<i+1<<": "<<endl;
    cin>>blocksize[i];
   }
  cout<<endl<<endl;

  clrscr();
  cout<<"Processes size: "<<endl;
  for(i=0; i<m; i++)
   {
    cout<<"Process "<<i+1<<": "<<endl;
    cin>>processsize[i];
   }
  cout<<endl<<endl;

  clrscr();
  cout<<"Block size: "<<endl;
  for(i=0; i<5; i++)
   cout<<blocksize[i]<<" ";
  cout<<endl<<endl;

  cout<<"Process Size: "<<endl;
  for(i=0; i<4; i++)
   cout<<processsize[i]<<" ";
  cout<<endl<<endl;

  firstfit();

  getch();
 }