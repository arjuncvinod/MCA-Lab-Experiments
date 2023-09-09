#include<stdio.h>
int main()
{
int number,limit,i;
printf("Enter the number : ");
scanf("%d", &number);
printf("Enter the limit : ");
scanf("%d", &limit);
for(i=1;i<=limit;i++)
{
printf("%d * %d = %d \n",i,number,(i*number));
}
return 0;
}