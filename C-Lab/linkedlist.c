#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *create(struct node *);
struct node *insertbeg(struct node *);
struct node *insertend(struct node *);
struct node *insertafter(struct node *);
struct node *insertbefore(struct node *);
struct node *deletionbeg(struct node *);
struct node *deletionend(struct node *);
struct node *deletionafter(struct node *);
struct node *traverse(struct node *);

struct node *create(struct node *start)
{
    struct node *new_node,*ptr;
    int num;
    printf("Enter Data:\n");
    scanf("%d",&num);
    while(num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node -> data = num;
        if(start == NULL)
        {
            new_node -> next = NULL;
            start = new_node;
        }
        else
        {
            ptr = start;
            while(ptr -> next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->next=NULL;
        }
        printf("Enter Data:\n");
        scanf("%d",&num);
    }
    return start;
};

struct node *insertbeg(struct node *start)
{
    struct node *new_node;
    int num;
    printf("Enter Data:\n");
    scanf("%d",&num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = start;
    start = new_node;
    return start;
};

struct node *insertend(struct node *start)
{
    struct node *new_node,*ptr;
    ptr = start;
    int num;
    printf("Enter Data:\n");
    scanf("%d",&num);
    while(ptr -> next != NULL)
        ptr = ptr -> next;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = NULL;
    ptr -> next = new_node;
    return start;
};

struct node *insertafter(struct node *start)
{
    struct node *new_node,*ptr,*preptr;
    ptr = start;
    preptr = ptr;
    int num,e;
    printf("Enter Data:\n");
    scanf("%d",&num);
    printf("Enter element after which element is to be added:\n");
    scanf("%d",&e);
    while(preptr -> data != e)
    {
        preptr = ptr;
        ptr = ptr -> next;
    }
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node ->data = num;
    preptr -> next = new_node;
    new_node -> next = ptr;
    return start;
};

struct node *insertbefore(struct node *start)
{
    struct node *new_node,*ptr,*preptr;
    ptr = start;
    preptr = start;
    int num,e;
    printf("Enter Data:\n");
    scanf("%d",&num);
    printf("Enter element after which element is to be added:\n");
    scanf("%d",&e);
    while(ptr -> data != e)
    {
        preptr = ptr;
        ptr = ptr -> next;
    }
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node ->data = num;
    preptr -> next = new_node;
    new_node -> next = ptr;
    return start;
};

struct node *deletionbeg(struct node *start)
{
    struct node *ptr;
    if(start == NULL)
        printf("No Linked List\n");
    else
    {
        ptr = start;
        start = start -> next;
        free(ptr);
    }
    return start;
};

struct node *deletionend(struct node *start)
{
    struct node *ptr,*preptr;
    ptr = start;
    preptr = start;
    while(ptr -> next != NULL)
    {
        preptr = ptr;
        ptr = ptr -> next;
    }
    preptr -> next = NULL;
    free(ptr);
    return start;
};

struct node *deletionafter(struct node *start)
{
    struct node *ptr,*preptr;
    ptr = start;
    preptr = start;
    int e;
    printf("Enter element after which element is to be deleted:\n");
    scanf("%d",&e);
    while(preptr -> data != e)
    {
        preptr = ptr;
        ptr = ptr -> next;
    }
    preptr -> next = ptr -> next;
    free(ptr);
    return start;
};

struct node *traverse(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while(ptr != NULL)
    {
        printf("%d  ",ptr -> data);
        ptr = ptr -> next;
    }
    printf("\n");
    return start;
};

int main()
{
    int n;

    do
    {
    printf("Enter your choice:\n");
    printf("0.Create Linked List\n");
    printf("1.Inserting an Element at Beginning\n");
    printf("2.Inserting an Element at End\n");
    printf("3.Inserting an Element after a Node\n");
    printf("4.Inserting an Element before a Node\n");
    printf("5.Deleting an element at Beginning\n");
    printf("6.Deleting an Element at End\n");
    printf("7.Deleting an Element after a Node\n");
    printf("8.Traversing a Linked List\n");
    scanf("%d",&n);

    switch(n)
    {
        case 0:start = create(start);
        break;
        case 1:start = insertbeg(start);
        break;
        case 2:start = insertend(start);
        break;
        case 3:start = insertafter(start);
        break;
        case 4:start = insertbefore(start);
        break;
        case 5:start = deletionbeg(start);
        break;
        case 6:start = deletionend(start);
        break;
        case 7:start = deletionafter(start);
        break;
        case 8:start = traverse(start);
        break;
        default:printf("Incorrect choice\n");
    }

    printf("Do you want to continue? 0 - NO/ 1 - YES\n");
    scanf("%d",&n);
    }while(n != 0);
}
