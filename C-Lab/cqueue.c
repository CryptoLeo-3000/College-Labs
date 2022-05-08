#include<stdio.h>
int queue[5],rear = -1,front = -1;
void insertion()
{
    if((front == 0 && rear == 4)|| rear == front-1)
        printf("Overflow\n");
    else
    {
        int e;
    printf("Enter element to be entered\n");
    scanf("%d",&e);
        if(front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else if(rear == 4 && front != 0)
            rear = 0;
        else
            rear += 1;
        queue[rear] = e;
    }
}
void deletion()
{
    if(front == -1)
        printf("Underflow\n");
    else
    {
        printf("Element Deleted:%d\n",queue[front]);
        if(front == rear)
    {
        front  = -1;
        rear = -1;
    }
    else if(front == 4)
        front = 0;
    else
        front += 1;
    }
}
void main()
{
    int n;

     do
    {
    printf("Enter your choice:\n");
    printf("1.Insertion\n");
    printf("2.Deletion\n");
    scanf("%d",&n);

    switch(n)
    {
        case 1:insertion();
        break;
        case 2:deletion();
        break;
        default:printf("Incorrect Option\n");
    }

    printf("Queue elements:\n");
    if(front > rear)
    {
        for(int i=front;i <= 4; i++)
        printf("%d ",queue[i]);
        for(int i = 0;i<=rear;i++)
            printf("%d ",queue[i]);
    printf("\n");
    }
    else
    {
        for(int i=front;i <= rear; i++)
        printf("%d ",queue[i]);
        printf("\n");
    }

    printf("Do you want to continue? 0 - NO/1 - YES");
    scanf("%d",&n);
    }while(n != 0);
}
