#include<stdio.h>
int main()
{
int limit, n1=0,n2=1,num;
printf("Enter the limit : ");
scanf("%d", &limit);
printf("%d\n",n1);
for ( int i = 0; i < limit; i++)
{
num = n1+n2;
n1 = n2;
n2 = num;
printf("%d\n",num);
}
return 0;
}