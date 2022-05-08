#include<iostream.h>
#include<conio.h>
int pid[5], at[5], bt[5], ct[5], tat[5], wt[5];

void arrivalarrange()
 {
  for(int i=0; i<5; i++)
    for(int j=i; j<5; j++)
      if(at[j] <= at[i])
       {
	int temp_1 = pid[i];
	pid[i] = pid[j];
	pid[j] = temp_1;

	temp_1 = at[i];
	at[i] = at[j];
	at[j] = temp_1;

	temp_1 = bt[i];
	bt[i] = bt[j];
	bt[j] = temp_1;
       }
 }

void completiontime()
 {
  int pt = 0, max_bt = 1;

  while(max_bt != 0)
   {
   }
 }
*/

void main()
 {
  clrscr();

  cout<<"...Enter the process information...\n";
  for(int i=0; i<5; i++)
   {
    cout<<"...Process ID"<<i+1<<"...\n";
    cout<<"Enter Process Id: ";
    cin>>pid[i];
    cout<<"Enter Arrival Time: ";
    cin>>at[i];
    cout<<"Enter Burst Time: ";
    cin>>bt[i];
   }

   clrscr();
   cout<<"Intital process table [process_id, arrival time, burst time]\n");
   for(i=0; i<5; i++)
     cout<<pid[i]<<"\t"<<at[i]<<"\t"<<bt[i]<<endl;

  arrivalarrange();

  cout<<"Intital process table [process_id, arrival time, burst time]\n");
  for(i=0; i<5; i++)
     cout<<pid[i]<<"\t"<<at[i]<<"\t"<<bt[i]<<endl;
  getch();
}

