#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();

char ch;

struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL,*temp,*newnode;

int main()
{
    int choice=0;
    while(choice<4)
    {
        system("cls");
        printf("\n--QUEUE USING LINKED LIST--\n");
        printf("\n1-> Enqueue Element");
        printf("\n2-> Dequeue Element");
        printf("\n3-> Display Queue");
        printf("\n4-> Exit");
        printf("\n\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            default: printf("\n\nProgram Ended!\n\nThankyou!"); break;
        }
    }
    return 0;
}

void dequeue()
{
    temp=front;
    if(temp==NULL)
    {
        printf("\nQueue Underflow\n");
    }
    else
    {
        front=front->next;
        printf("\nElement deleted is : %d\n",temp->data);
        temp->next=NULL;
        free(temp);
    }
    printf("\n\nPress any key to continue : ");
    scanf(" %c",&ch);
    return ;
}
void display()
{
    temp=front;
    if(temp==NULL)
    {
        printf("\nThe Queue is Empty");
    }
    else
    {
        printf("\nDisplaying the Queue\n\n");
        while(temp!=NULL)
        {
            printf("|%d|",temp->data);
            temp=temp->next;
        }
    }
    printf("\n\nPress any key to continue : ");
    scanf(" %c",&ch);
    return ;
}
void enqueue()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=rear->next;
    }
    printf("\n\nPress any key to continue : ");
    scanf(" %c",&ch);
    return ;
}