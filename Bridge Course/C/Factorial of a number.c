#include<stdio.h>
int main()
{
int number,fact=1,i;
printf("Enter the number : ");
scanf("%d", &number);
if(number<0)
{
printf("Please enter a valid number");
}
else
{
for(i=1;i<=number;i++)
{
fact = fact*i;
}
printf("Factorial of %d is %d",number,fact);
}
return 0;
}
