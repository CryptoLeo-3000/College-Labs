#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
double group1[200], group2[200];

void rate()
 {
     for(int i=0; i<200; i++)
     {
         group1[i] = rand(1, 5);
         group2[i] = rand(1, 5);
     }
 }

 void result()
  {
      double sum1=0, sum2=0;
      for(int i=0; i<200; i++)
      {
          sum1 += group1[i];
          sum2 += group2[i];
      }

      sum1 /= 200;
      sum2 /= 200;

      if(sum1>sum2)
        printf("Group 1 is more satisfied with the website with %d out of 4", sum1);
      else if(sum2>sum1)
        printf("Group 2 is more satisfied with the website with %d out of 4", sum2);
      else
        printf("Both groups like the website equally with %d out of 4", sum1);
  }

void main()
 {
     clrscr();
     printf("Rating by group 1\n");
     printf("Rating by Group 2\n");
     rate();
     result();
     getch();
 }

