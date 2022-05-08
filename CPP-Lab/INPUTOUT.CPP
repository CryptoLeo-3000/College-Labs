#include<fstream.h>
#include<conio.h>
void main()
 {
   clrscr();
   ifstream fin;
   ofstream fout;
   fin.open("input.txt");
   fout.open("output.txt",ios::out);
   int arr[20],temp,x;

   for(int k=0;k<5;k++)
   {
    fin>>x;
    arr[k]=x;
    }

   for(int b=0;b<5;b++)
    cout<<arr[b]<<endl;

   for(int i=0;i<5;i++)
    {
     for(int j=i+1;j<5;j++)
      {
	if(arr[i]>arr[j])
	 {
	   temp=arr[i];
	   arr[i]=arr[j];
	   arr[j]=temp;
	 }
      }
    }
    cout<<"Array Input in output.txt\n";
    for(int a=0;a<5;a++)
     {
       cout<<arr[a]<<endl;
       fout<<arr[a]<<' ';
     }
    getch();
 }