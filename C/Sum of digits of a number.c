#include<stdio.h>
int main()
{
int number,sum=0,temp,i;
printf("Enter the number : ");
scanf("%d",&number);
while (number > 0)
{
temp = number%10;
sum = sum+temp;
number = number/10;
}
printf("The sum of the digits is: %d\n", sum);
}