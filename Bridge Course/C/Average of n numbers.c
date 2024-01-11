#include<stdio.h>
int main()
{
int limit,i;
float avg,sum=0.0,num;
printf("Enter the number of elements : ");
scanf("%d", &limit);
if (limit<=0)
{
printf("Please enter a positive integer : ");
return 1;
}
printf("Enter the %d numbers : ", limit);
for ( i = 0; i < limit; i++)
{
scanf("%f",&num);
sum = sum+num; 
}
printf("%f",sum);
avg = sum/limit;
printf("Average = %f", avg);
return 0;
}