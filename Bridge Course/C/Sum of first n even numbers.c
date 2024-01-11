#include<stdio.h>
int main()
{
int limit,sum=0,i,even;
printf("Enter the number of elements : ");
scanf("%d",&limit);
for ( i = 1; i <=limit; i++)
{
even = 2*i;
sum +=even;
}
printf("Sum of even numbers are %d",sum);
return 0;
}