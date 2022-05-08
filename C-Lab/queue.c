#include<stdio.h>
int queue[20],rear = -1,front = -1;
void insertion()
{
    int e;
    printf("Enter element to be entered\n");
    scanf("%d",&e);

    if(rear == 19)
        printf("Overflow\n");
    else
    {
        if(front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else
            rear += 1;
        queue[rear] = e;
    }

    printf("Queue elements:\n");
    for(int i=front;i <= rear; i++)
        printf("%d ",queue[i]);
    printf("\n");
}
void deletion()
{
    if(front == -1)
        printf("Underflow");
    else
    {
        printf("Element Deleted:%d\n",queue[front]);
        front += 1;
    }

    printf("Queue elements:\n");
    for(int i=front;i <= rear; i++)
        printf("%d ",queue[i]);
    printf("\n");
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

    printf("Do you want to continue? 0 - NO/1 - YES");
    scanf("%d",&n);
    }while(n != 0);
}
