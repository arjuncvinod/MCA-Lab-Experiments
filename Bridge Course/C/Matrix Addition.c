#include<stdio.h>
int main()
{
int row,col;
printf("Enter the rows and columns of the matrix : ");
scanf("%d %d",&row,&col);
int arr1[100][100], arr2[100][100], arr3[100][100];
printf("Enter the elements of first matrix : ");
for (int i = 0; i < row; i++)
{
for (int j = 0; j < col; j++)
{
scanf("%d",&arr1[i][j]);
}
}
printf("Enter the elements of second matrix : ");
for (int i = 0; i < row; i++)
{
for (int j = 0; j < col; j++)
{
scanf("%d",&arr2[i][j]);
}
}
for (int i = 0; i < row; i++)
{
for (int j = 0; j < col; j++)
{
arr3[i][j]=arr1[i][j]+arr2[i][j];
}
}
for (int i = 0; i < row; i++)
{
for (int j = 0; j < col; j++)
{
printf("%d\t",arr3[i][j]);
}
printf("\n");
}
return 0;
}