#include<iostream.h>
#include<conio.h>

int pid[5] = {0, 1, 2, 3, 4}, at[5] = {0, 1, 2, 3, 4}, bt[5] = {2, 6, 4, 9, 12},
ct[5], tat[5], wt[5];
float avgtat = 0, avgwt = 0;

void completion()
 {
  int sum = 0;
  for(int i=0; i<5; i++)
   {
    sum = sum+bt[i];
    ct[i] = sum;
   }
 }

void turnaround()
 {
  for(int i=0; i<5; i++)
    tat[i] = ct[i] - at[i];
 }

void waiting()
 {
  for(int i=0; i<5; i++)
   wt[i] = tat[i] - bt[i];
 }

void main()
 {
  clrscr();

  completion();
  turnaround();
  waiting();

  cout<<"Process ID|Arrival Time|Burst Time|Completion Time|Turn Around Time|Waiting Time\n";
  for(int i=0; i<5; i++)
    cout<<"   "<<pid[i]<<"\t     "<<at[i]<<"\t\t  "<<bt[i]<<"\t\t  "<<ct[i]
    <<"\t\t  "<<tat[i]<<"\t\t  "<<wt[i]<<endl;

  for(i=0; i<5; i++)
   {
    avgtat = avgtat + tat[i];
    avgwt = avgwt + wt[i];
   }
  cout<<"\nAverage Turn Around Time= "<<avgtat/5<<endl;
  cout<<"Average Waiting Time= "<<avgwt/5<<endl;
  getch();
 }