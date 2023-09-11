#include<stdio.h>
int main()
{
    int arr[20];
    int n,r=0;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter values\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("sum is\n");
    for(int i=0;i<n;i++){
        r=r+arr[i];

    }
     printf("%d \n",r);
}

