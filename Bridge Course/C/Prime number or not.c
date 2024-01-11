#include<stdio.h>
int main()
{
int i,num,flag=1;
printf("Enter the number : ");
scanf("%d",&num);
if (num<=1)
{
flag=0;
}
else{
for ( i = 2; i <num; i++)
{
if (num%i==0)
{
flag=0;
break;
}
}
}
if (flag)
{
printf("%d is a prime number", num);
}
else
{
printf("%d is not a prime number", num);
}
