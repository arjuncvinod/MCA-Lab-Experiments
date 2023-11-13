#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *new_node,*front=NULL,*rear=NULL,*current;
void enquee()
{
    new_node=(struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA:\n");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    if(rear==NULL)
    {
        front=rear=new_node;
        rear->next=front;
    }
    else
    {
        rear->next=new_node;
        rear=new_node;
        rear->next=front;
    }
}
void dequee()
{
 current=front;
 if(front==NULL&&rear==NULL)
 {
     printf("Empty\n");
 }
 else if(front==rear)
 {
   front=rear=NULL;
   free(current);
 }
 else
 {
    front=front->next;
    rear->next=front;
    free(current);
 }
}
void search()
{
    int val;
    int i=1;
    int flag=0;
    printf("Enter value to search:\n");
    scanf("%d",&val);
   current=front;
   while(current->next!=front)
   {
       if(current->data==val)
       {
           flag=1;
           break;
       }
       current=current->next;
       i++;
   }
   if(current->data==val)
   {

       flag=1;
   }
   if(flag==1)
   {
     printf("value is found at %d\n",i);
   }
   else
   {
       printf("value not found\n");
   }
}
void display()
{
    current=front;
  if(front==NULL&&rear==NULL)
 {
     printf("Empty\n");
 }
 else if(front==rear)
 {
   printf("[%d]",current->data);
 }
 else
 {
    while(current->next!=front)
    {
        printf("[%d]-",current->data);
        current=current->next;

    }
    printf("[%d]",current->data);
 }
}
void main()
{
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
            enquee();
            display();
            break;
        }
    case 2:
        {
            dequee();
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
