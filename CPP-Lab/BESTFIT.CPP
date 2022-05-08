#include<iostream.h>
#include<conio.h>
int blocksize[100], processsize[100], allot[100];

void bestfit()
 {
  int diff[5], min, pos = -1;

  for(int i=0; i<4; i++)
   {
    for(int j=0; j<5; j++)
     {
      diff[j] = blocksize[j] - processsize[i];
      if(diff[j] > 0)
       min = diff[j];
     }

    for(j=0; j<5; j++)
     for(int k=0; k<5; k++)
      if(diff[k] < min && diff[k] > 0 || diff[k] == min)
       {
	min = diff[k];
	pos = k;
       }

    if(pos != -1)
     {
      blocksize[pos] -= processsize[i];
      allot[i] = pos+1;
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

  bestfit();

  getch();
 }