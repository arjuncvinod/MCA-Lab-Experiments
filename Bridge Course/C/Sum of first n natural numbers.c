#include<stdio.h>
int main()
{
int limit, sum=0, i;
printf("Enter the limit : ");
scanf("%d", &limit);
for(i=1;i<=limit;i++)
{
sum=sum+i;
}
printf("Sum of first %d natural numbers are %d",limit,sum);
}
