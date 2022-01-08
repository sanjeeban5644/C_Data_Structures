#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();

int front=-1,rear=-1;
char ch;

int main()
{
    int n;
    printf("\nSIMPLE QUEUE IMPLEMENTATION USING ARRAY\n");
    printf("\nEnter the size of the Queue : ");
    scanf("%d",&n);
    int queue[n],choice=0;
    while(choice<4)
    {
        system("cls");
        if(front>rear)
        {
            front=-1;
            rear=-1;
        }
        printf("\n--SIMPLE QUEUE IMPLEMENTATION USING ARRAY--\n");
        printf("\n1-> Enqueue Element");
        printf("\n2-> Dequeue Element");
        printf("\n3-> Display Queue");
        printf("\n4-> Exit");
        printf("\n\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue(queue,n); break;
            case 2: dequeue(queue,n); break;
            case 3: display(queue); break;
            default: printf("\nProgram Ended\n\nThankyou!"); break;
        }
    }
    return 0;
}

void dequeue(int queue[],int n)
{
    if(front==-1)
    {
        printf("\nQueue Underflow\n");
    }
    else
    {
        printf("\nElement deleted is : %d",queue[front]);
        front++;
    }
    printf("\n\nPress any key to Continue : ");
    scanf(" %c",&ch);
    return ;
}
void display(int queue[])
{
    if(front==-1)
    {
        printf("\nThe Queue is Empty!");
    }
    else
    {
        int i;
        for(i=front;i<=rear;i++)
        {
            printf("|%d|",queue[i]);
        }
    }
    printf("\n\nPress any key to Continue : ");
    scanf(" %c",&ch);
    return ;
}
void enqueue(int queue[],int n)
{
    if(rear==n-1)
    {
        printf("\nQueue Overflow\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear++;
        printf("\nEnter the data : ");
        scanf("%d",&queue[rear]);
    }
    printf("\n\nPress any key to Continue : ");
    scanf(" %c",&ch);
    return ;
}