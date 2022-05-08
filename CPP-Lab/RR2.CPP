#include<iostream.h>
#include<conio.h>

int process[50], at[50], bt[50], ct[50], tat[50], wt[50], rem_t[50], quantum, m;

void ArrangeProcess()
 {
  int temp;
  for(int i=0; i<m; i++)
   {
    for(int j=i; j<m; j++)
     {
      if(at[j]<at[i])
       {
	temp = process[i];
	process[i] = process[j];
	process[j] = temp;

	temp = at[i];
	at[i] = at[j];
	at[j] = temp;

	temp = bt[i];
	bt[i] = bt[j];
	bt[j] = temp;
       }
     }
   }
 }

void WaitingTime()
 {
  int t=0, arrival=0;
  while(1)
   {
    int done = 0;
    for(int i=0; i<m; i++)
     {
      if(rem_t[i]>0)
       {
	 done = 1;
	 if(rem_t[i] > quantum && at[i] <= arrival)
	  {
	    t+=quantum;
	    rem_t[i]-=quantum;
	    arrival++;
	  }
	 else
	  {
	    if(at[i] <= arrival)
	     {
	      arrival++;
	      t+=rem_t[i];
	      rem_t[i] = 0;
	      ct[i] = t;
	     }
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
   {
    tat[i] = ct[i] - at[i];
    wt[i] = tat[i] - bt[i];
   }
 }

void AvgTime()
 {
  float total_tat = 0, total_wt = 0;

  WaitingTime();
  TurnAroundTime();

  cout<<"Process|"<<"Arrival Time|"<<"Burst Time|"<<"Completion TIme|"<<"Turn Around Time|"<<"Waiting Time"<<endl;

  for(int i=0; i<m; i++)
   {
    total_wt = total_wt + wt[i];
    total_tat = total_tat + tat[i];
    cout<<" "<<process[i]<<"\t\t"<<at[i]<<"\t"<<bt[i]<<"\t\t"<<ct[i]<<"\t"<<tat[i]<<"\t\t "<<wt[i]<<endl;
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

  cout<<"Enter arrival time for each process"<<endl;
  for(i=0; i<m; i++)
   {
    cout<<"Arrival Time for process "<<i<<" : "<<endl;
    cin>>at[i];
   }

  cout<<"Enter burst time for each process"<<endl;
  for(i=0; i<m; i++)
   {
    cout<<"Burst time for process "<<i<<" : "<<endl;
    cin>>bt[i];
    rem_t[i] = bt[i];
   }

  cout<<"Enter time slice or Time Quanta for Round Robin"<<endl;
  cin>>quantum;

  ArrangeProcess();
  AvgTime();

  getch();
 }