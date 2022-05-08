#include<stdio.h>
void main()
{
int que[10],front,rear,num,max,choice,i,input;
max=10;
printf("1.insertion of element");
printf("\n2.deletion of element");
printf("\nenter the limit of the queue");
scanf("%d",&max);
printf("enter ur choice");
scanf("%d",&choice);
if(choice==1)
{
    if(rear==max-1)
    {
        printf("overflow");
    }
    if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
    }
    else
    {
        rear+=rear;
    }
    printf("enter");
    for(i=front;i<=max;i++)
    {
        scanf("%d",&input);
    }

     que[rear]=input;
    for(i=front;i<=rear;i++)
    {

       printf("%d",&que[i]);


    }
}
}
