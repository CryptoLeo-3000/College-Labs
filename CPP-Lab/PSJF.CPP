#include <bits/stdc++.h>
using namespace std;
int wt[50], tat[50], n;
struct Process
 {
  int pid;
  int bt;
  int art;
 };

void TurnAroundTime(Process proc[])
 {
  for (int i = 0; i<n; i++)
   tat[i] = proc[i].bt + wt[i];
 }

void WaitingTime(Process proc[])
 {
  int rt[50];
  for (int i = 0; i<n; i++)
   rt[i] = proc[i].bt;
  int complete = 0, t = 0, minm = INT_MAX;
  int shortest = 0, finish_time;
  bool check = false;
  while (complete != n)
   {
    for (int j = 0; j<n; j++)
     {
      if ((proc[j].art <= t) && (rt[j] < minm) && rt[j] > 0)
       {
        minm = rt[j];
        shortest = j;
        check = true;
       }
     }
    if (check == false)
     {
      t++;
      continue;
     }
    rt[shortest]--;
    minm = rt[shortest];
    if (minm == 0)
     minm = INT_MAX;
    if (rt[shortest] == 0)
     {
      complete++;
      check = false;
      finish_time = t + 1;
      wt[shortest] = finish_time -
      proc[shortest].bt -
      proc[shortest].art;
      if (wt[shortest] < 0)
       wt[shortest] = 0;
     }
    t++;
   }
 }

void AvgTime(Process proc[])
 {
  int total_wt = 0, total_tat = 0;
  WaitingTime(proc);
  TurnAroundTime(proc);
  cout << "Processes " << " Burst time " << " Waiting time " << " Turn around time\n";
  for (int i = 0; i < n; i++)
   {
    total_wt = total_wt + wt[i];
    total_tat = total_tat + tat[i];
    cout << " " << proc[i].pid << "\t\t" << proc[i].bt << "\t\t " << wt[i] << "\t\t " << tat[i] << endl;
   }
  cout << "\nAverage waiting time = " << (float)total_wt / (float)n; cout << "\nAverage turn around time = " << (float)total_tat / (float)n;
 }

int main()
 {
  Process proc[] = { { 1, 5, 1 }, { 2, 3, 1 }, { 3, 6, 2 }, { 4, 5, 3 } };
  int n = sizeof(proc) / sizeof(proc[0]);
  AvgTime(proc);
  return 0;
 }