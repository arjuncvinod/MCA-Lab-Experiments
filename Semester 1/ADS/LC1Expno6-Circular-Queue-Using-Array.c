#include<stdio.h>

void main()
{
int n;
printf("Enter the size of queue:\n");
scanf("%d",&n);
int queue[n];
int front=-1;
int rear=-1;
void enqueue()
{
    int data;
    printf("Enter the data:\n");
    scanf("%d",&data);
    if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=data;

    }
    else if((rear+1)%n==front)
    {
        printf("Queue is full\n");
    }
    else
    {
        rear=(rear+1)%n;
        queue[rear]=data;
    }
}

void dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("Queue is empty\n");

    }
    else if(front==rear)
    {
        printf("%d is dequeued\n",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("%d is dequeued\n",queue[front]);
        front=(front+1)%n;

    }
}
void display()
{
    int i=front;
    if(front==-1&&rear==-1)
    {
        printf("Queue is empty\n");

    }
    else
    {
        while(i!=rear)
        {
            printf("%d->",queue[i]);
            i=(i+1)%n;
        }
        printf("%d",queue[rear]);
    }
}
void search()
{
    int srch;
    int flag=0;
    printf("Enter the value to search:\n");
    scanf("%d",&srch);

   int i=front;

        while(i!=rear)
        {
           if(queue[i]==srch)
           {
               flag=1;
               break;
           }
           if(queue[rear]==srch)
           {
               flag=1;
               break;
           }
          i=(i+1)%n;
        }
       // printf("%d",queue[rear]);
       if(flag==1)
       {
           printf("value is found\n");
       }
       else
        {
        printf("Value is not found\n");
       }
}



    int opt;
    int a=1;
    while(a==1)
    {
    printf("\n");
    printf("1.ENQUEE\n");
    printf("2.DENQUEE\n");
    printf("3.SEARCH\n");
    printf("4.DISPLAY\n");
    printf("5.EXIT\n");
    printf("ENTER YOR CHOICE:\n");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        {
            enqueue();
            display();
            break;
        }
    case 2:
        {
            dequeue();
            display();
            break;
        }
    case 3:
        {
           search();
            break;
        }
    case 4:
        {
            display();
            break;
        }
    case 5:
        {
            a=0;
            printf("EXITED\n");
            break;
        }
    default:
        {
            printf("ENTER A VALID CHOICE\n");
        }

    }
   }
}
