#include<stdio.h>
int main()
{

    int arr[20];
    int n;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter values\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("elements are\n");
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
}
