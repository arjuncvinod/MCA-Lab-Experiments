#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *start=NULL,*new_node,*current,*tail;
void create()
{
 int n;
 printf("enter the number of nodes needed:\n");
 scanf("%d",&n);
 printf("Enter %d data:",n);
 for(int i=0;i<n;i++)
 {
 new_node=(struct node *)malloc(sizeof(struct node));
 scanf("%d",&new_node->data);
 new_node->prev=NULL;
 new_node->next=NULL;
 if(start==NULL)
 {
     start=tail=new_node;
     current=new_node;
 }
 else{
    current->next=new_node;
    new_node->prev=current;
    current=tail=new_node;

 }
 }
}
void insrt_beginig()
{
 new_node=(struct node *)malloc(sizeof(struct node));
 printf("Enter data:");
 scanf("%d",&new_node->data);
 new_node->prev=NULL;
 new_node->next=NULL;
 if(start==NULL)
 {
     start=new_node;

 }
 else{
    start->prev=new_node;
    new_node->next=start;
    start=new_node;
 }
}
void insrt_end()
{
  new_node=(struct node *)malloc(sizeof(struct node));
 printf("Enter data:");
 scanf("%d",&new_node->data);
 new_node->prev=NULL;
 new_node->next=NULL;
 if(start==NULL)
 {
     start=new_node;

 }
 else
 {
   tail->next=new_node;
   new_node->prev=tail;
   tail=new_node;
 }
}
int count()
{     int count=0;
      for(current=start;current!=NULL;current=current->next)
    {
        count++;
    }
    return count;
}
void insrt_at_position()
{
  int i=1;
  int pos;
  int co=count();
  printf("enter position to insert:\n");
  scanf("%d",&pos);
  if(pos<1)
  {
      printf("invalid location\n");
  }
  else if(pos>co)
  {
      printf("please check the size of list\n");
  }
  else if(pos==1)
  {
      insrt_beginig();
  }
  else if(pos==co)
  {
      insrt_end();
  }
  else
  {
     new_node=(struct node *)malloc(sizeof(struct node));
     printf("Enter data:");
     scanf("%d",&new_node->data);
     new_node->prev=NULL;
     new_node->next=NULL;
     current=start;
    while(i<pos-1)
    {
     current=current->next;
     i++;
    }
    new_node->prev=current;
    new_node->next=current->next;
    current->next=new_node;
    new_node->next->prev=new_node;
  }
}
void search()
{
 int val;
 int flag=0;
 printf("enter value to search:\n");
 scanf("%d",&val);
 int i=1;
 current=start;
 while(current!=NULL)
 {
    if(current->data==val)
    {
        flag=1;

        break;
    }
    current=current->next;
    i++;
 }
 if(flag==1)
 {
     printf("value is found at %d",i);
 }
 else{
    printf("value is not found");
 }
}
void delete_beg()
{

   current=start;
   if(start==NULL)
   {
       printf("list is empty\n");
   }
   else
    {
     start=start->next;
     start->prev=NULL;
     free(current);
   }
}
void delete_end()
{
if(start==NULL)
   {
       printf("list is empty\n");
   }
   else
    {
    current=tail;
    tail->prev->next=NULL;
    tail=tail->prev;
    free(current);
   }
}
void delete_pos()
{
    int j=1;
    int pos;
    int co;
    
    printf("enter position to delete:\n");
    scanf("%d",&pos);
    co=count();
    if(start==NULL)
    {
        printf("tere is nothing to delete\n");
    }
    else if(pos==1)
    {
        delete_beg();
    }
     else if(pos>co)
    {
        printf("invalid location\n");
    }
    else if(pos==co)
    {
        delete_end();
    }
    else{
    current=start;
    while(j<pos)
    {
     current=current->next;
     j++;
    }
   current->prev->next=current->next;
   current->next->prev=current->prev;
   free(current);
    }
}

void display()
{
    printf("doubly linked list is:\n");
    current =start;

   while(current != NULL) {
      printf("[%d]-> ",current->data);
      current = current->next;
   }
   printf("NULL");

}
int main()
{
    create();
    display();
    int opt;
    int a=1;
    while(a==1)
    {

    printf("\n");
    printf("SELECT THE OPERATION:\n");
    printf("1.INSERT AT BEGINING\n");
    printf("2.INSERT AT END\n");
    printf("3.INSERT AT ANY POSITION\n");
    printf("4.DELETE FROM BEGINING\n");
    printf("5.DELETE FROM END\n");
    printf("6.DELETE FROM ANY POSITION\n");
    printf("7.SEARCH\n");
    printf("8.EXIT\n");
    printf("SELECT AN OPTION:\n");
    scanf("%d",&opt);

    switch(opt)
    {

    case 1:
        {
            insrt_beginig();
            display();
            break;
        }
    case 2:
        {
            insrt_end();
            display();
            break;
        }
    case 3:
        {
            insrt_at_position();
            display();
            break;
        }
    case 4:
        {
            delete_beg();
            display();
            break;
        }
    case 5:
        {
            delete_end();
            display();
            break;
        }
    case 6:
        {
            delete_pos();
            display();
            break;
        }
    case 7:
        {
            search();
            break;
        }
    case 8:
        {
            printf("exited\n");
            a=0;
            break;
        }
    default:
        {
            printf("enter valid option");
        }
    }
    }

}
