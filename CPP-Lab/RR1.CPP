#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int process[50], bt[50], tat[50], wt[50], rem_bt[50], quantum, m;

void WaitingTime()
 {
  int t=0;
  while(1)
   {
    int done = 0;
    for(int i=0; i<m; i++)
     {
      if(rem_bt[i]>0)
       {
	 done = 1;
	 if(rem_bt[i] > quantum)
	  {
	    t+=quantum;
	    rem_bt[i]-=quantum;
	  }
	 else
	  {
	    t+=rem_bt[i];
	    wt[i] = t-bt[i];
	    rem_bt[i] = 0;
	  }
       }
     }
     if(done==0)
      break;
   }
 }

void TurnAroundTime()
 {
  for(int i=0; i<m; i++)
   tat[i] = bt[i] + wt[i];
 }

void AvgTime()
 {
  float total_tat = 0, total_wt = 0;

  WaitingTime();
  TurnAroundTime();

  cout<<"Process|"<<"Burst Time|"<<"Turn Around Time|"<<"Waiting Time"<<endl;

  for(int i=0; i<m; i++)
   {
    total_wt = total_wt + wt[i];
    total_tat = total_tat + tat[i];
    cout<<" "<<process[i]<<"\t\t"<<bt[i]<<"\t\t"<<tat[i]<<"\t\t "<<wt[i]<<endl;
   }
  cout <<"Average waiting time = "<<total_wt/m<<endl;
  cout <<"Average turn around time = "<<total_tat/m<<endl;
 }

void main()
 {
  clrscr();
  cout<<"Enter number of processes to be entered"<<endl;
  cin>>m;

  for(int i=0; i<m; i++)
   process[i] = i;

  cout<<"Enter burst time for each process"<<endl;
  for(i=0; i<m; i++)
   {
    cout<<"Burst time for process "<<i<<" : "<<endl;
    cin>>bt[i];
    rem_bt[i] = bt[i];
   }

  cout<<"Enter time slice or Time Quanta for Round Robin"<<endl;
  cin>>quantum;

  AvgTime();

  getch();
 }