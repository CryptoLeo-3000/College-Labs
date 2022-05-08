#include<iostream.h>
#include<conio.h>
int no_pro, no_res, allocation[50][50], max[50][50], available[1][50], need[50][50];

void definematrix()
 {
  cout<<"Enter no. of processes: "<<endl;
  cin>>no_pro;
  cout<<"Enter no. of resources: "<<endl;
  cin>>no_res;

  clrscr();
  cout<<"Enter resources allocated: "<<endl;
  for(int i=0; i<no_pro; i++)
   {
    cout<<"For process "<<i+1<<" :"<<endl;
    for(int j=0; j<no_res; j++)
     cin>>allocation[i][j];
   }

  clrscr();
  cout<<"Enter maximum resources needed: "<<endl;
  for(i=0; i<no_pro; i++)
   {
    cout<<"For process "<<i+1<<" :"<<endl;
    for(int j=0; j<no_res; j++)
     cin>>max[i][j];
   }

  clrscr();
  cout<<"Enter resources available: "<<endl;
  for(int j=0; j<no_res; j++)
    cin>>available[0][j];

  clrscr();
  for(i=0; i<no_pro; i++)
   {
    cout<<"Need for process "<<i+1<<endl;
    for(j=0; j<no_res; j++)
     {
      need[i][j] = max[i][j] - allocation[i][j];
      cout<<need[i][j]<<" ";
     }
    cout<<endl;
   }
 }

void definesequence()
 {
  int work[1][50], sequence[50], track[50], avail=0, seq_count=0;

  for(int i=0; i<no_pro; i++)
   track[i] = 0;

  for(i=0; i<no_res; i++)
   work[0][i] = available[0][i];

  i=0;

  while(i<no_pro)
   {
    for(int j=0; j<no_res; j++)
     {
      if(need[i][j] > work[0][j] || track[i]==1)
       {
	avail+=1;
	break;
       }
     }

    if(avail==0 && track[i]==0)
     {
      for(j=0; j<no_res; j++)
       work[0][j] += allocation[i][j];
      track[i] = 1;
      sequence[seq_count] = i;
      ++seq_count;
     }
    avail=0;
    ++i;

    for(j=0; j<no_pro; j++)
     if(track[j]==0 && i==5)
      i=0;
   }

  cout<<endl<<"Sequence: "<<endl;
  for(i=0; i<no_pro; i++)
    cout<<sequence[i]<<" ";
 }

void main()
 {
  clrscr();
  char yes;

  definematrix();
  clrscr();
  definesequence();

  getch();
}