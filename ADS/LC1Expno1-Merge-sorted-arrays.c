#include <stdio.h>
int main(){
int n1,n2;
printf("Enter the size of the first array: ");
scanf("%d",&n1);
int a[n1];
printf("Enter the array elements in sorted order: ");
for(int i=0;i<n1;i++){
scanf("%d",&a[i]);
}

printf("Enter the size of the second array: ");
scanf("%d",&n2);
int b[n2];
printf("Enter the array elements in sorted order: ");
for(int i=0;i<n2;i++){
scanf("%d",&b[i]);
}

void merge (int n1,int n2,int a[],int b[])
{
int i=0,j=0,k=0;
int s[n1+n2];
while(i<n1 && j<n2){
if(a[i]<=b[j])
{
s[k]=a[i];
k++;
i++;
}else{
s[k]=b[j];
k++;
j++;

}
}

while(n1>i){
s[k]=a[i];
k++;
i++;
}

while(n2>j){
s[k]=b[j];
k++;
j++;
}
for(i=0;i<n1+n2;i++){
printf("%d ",s[i]);
}
}

merge(n1,n2,a,b);

}


