#include <stdio.h>
int main() {
int num;
printf("Enter a positive integer: ");
scanf("%d", &num);
if (num <= 0) {
printf("Please enter a positive integer.\n");
} else {
printf("Factors of %d are: ", num);
for (int i = 1; i <= num; ++i) {
if (num % i == 0) {
printf("%d ", i);
}
}
}
return 0;
}
