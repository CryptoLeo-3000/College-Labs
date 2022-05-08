#include<stdio.h>
#include<malloc.h>
struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *root = NULL;
struct node *treecreate(struct node *);
struct node *nodecreate(struct node *);
struct node *treedisplay(struct node *);
struct node *nodeprint(struct node *);
struct node *newnode;
int n, l=0;
struct node *nodeprint(struct node *root)
{
    printf("Left node:%d", root->data

);
};
struct node *treecreate(struct node *root)
{
    struct node *ptr;
    while(1)
    {
        ptr = root;
        if(root == NULL)
        {
            root = nodecreate(root);
            root = newnode;
            printf("Root Node:\n");
            printf("Data = %d\n",root->data);
            printf("Left = %d\n",root->left);
            printf("Right = %d\n",root->right);
        }
        else
        {
            do
            {
                printf("Enter your way:\n");
                printf("1.Left Node\n");
                printf("2.Right Node\n");
                printf("0.Exit\n");
                scanf("%d",&n);

                switch(n)
                {
                    case 1:if(ptr -> left == NULL)
                            {
                                root = nodecreate(root);
                                ptr->left = newnode;
                                ptr = ptr->left;
                                printf("Current Node:\n");
                                printf("Data:%d\n",ptr->data);
                                printf("Left:%d\n",ptr->left);
                                printf("Right:%d\n",ptr->right);
                            }
                            else
                            {
                                ptr = ptr->left;
                                printf("Current Node:\n");
                                printf("Data:%d\n",ptr->data);
                                printf("Left:%d\n",ptr->left);
                                printf("Right:%d\n",ptr->right);
                            }
                    break;
                    case 2:if(ptr -> right == NULL)
                            {
                                root = nodecreate(root);
                                ptr->right = newnode;
                                ptr = ptr->right;
                                printf("Current Node:\n");
                                printf("Data:%d\n",ptr->data);
                                printf("Left:%d\n",ptr->left);
                                printf("Right:%d\n",ptr->right);
                            }
                            else
                                ptr = ptr->right;
                    break;
                    case 0:break;
                    break;
                    default:printf("Wrong Choice\n");
                }
            }while(n != 0);
        }
        printf("Do you want to continue to build the Tree? 0 - NO || 1 - YES\n");
        scanf("%d", &n);
        if(n == 0)
            break;
        else
            continue;
    }
    return root;
};

struct node *nodecreate(struct node *root)
{
    int n;
    printf("Enter data:\n");
    scanf("%d",&n);
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = n;
    newnode -> left = NULL;
    newnode -> right = NULL;
    return root;
};

struct node *treedisplay(struct node *root)
{
    struct node *ptr;
    ptr = root;
    printf("Root Node:\n");
    printf("Data:%d\n", root->data);
    printf("Left Pointer:%d\n", root->left);
    printf("Right Pointer:%d\n", root->right);
    while(1)
    {
        printf("Enter your path:\n");
        printf("1.Left\n");
        printf("2.Right\n");
        printf("0.Exit\n");
        scanf("%d", &n);

        if(n == 1)
        {
            if(ptr->left == NULL)
                printf("No Node found\n");
            else
            {
                ptr = ptr->left;
                printf("Current Node:\n");
                printf("Data:%d\n", ptr->data);
                printf("Left Pointer:%d\n", ptr->left);
                printf("Right Pointer:%d\n", ptr->right);
            }
        }
        else if(n == 2)
        {
            if(ptr->right == NULL)
                printf("No Node found\n");
            else
            {
                ptr = ptr->right;
                printf("Current Node:\n");
                printf("Data:%d\n", ptr->data);
                printf("Left Pointer:%d\n", ptr->left);
                printf("Right Pointer:%d\n", ptr->right);
            }
        }
        else
            break;
    }
    return root;
};
int main()
{
    do
    {
        printf("Enter your choice:\n");
        printf("1.Create Binary Tree\n");
        printf("2.Display Nodes\n");
        printf("0.Exit\n");
        scanf("%d",&n);

        switch(n)
        {
            case 1:root = treecreate(root);
            break;
            case 2:root = treedisplay(root);
            break;
            case 0:break;
            break;
            default:printf("Inappropriate Choice\n");
        }
        printf("Length of Tree:%d\n", l);

        printf("Do you want to continue? 0 - NO || 1 - YES\n");
        scanf("%d",&n);
    }while(n != 0);
    nodeprint(root->left);
}
