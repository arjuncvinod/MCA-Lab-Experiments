#include<stdio.h>
int main()
{
float num1,num2,temp;
printf("Enter two numbers : ");
scanf("%f %f",&num1,&num2);
temp = num1;
num1 = num2;
num2 = temp;
printf("swaped num1 = %f and num2 =%f",num1,num2);
return 0;
}
