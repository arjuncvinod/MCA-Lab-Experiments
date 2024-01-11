#include<stdio.h>
int main()
{
int number,reverse=0,remainder;
printf("Enter the number : ");
scanf("%d",&number);
int orgNumber = number;
while (number>0)
{
remainder = number%10;
reverse = reverse*10+remainder;
number = number/10;
}
if (orgNumber == reverse)
printf("%d is palindrom ",orgNumber);
else
printf("%d is not palindrom ",orgNumber);
return 0;
}