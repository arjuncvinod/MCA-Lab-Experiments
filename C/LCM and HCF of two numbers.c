#include <stdio.h>
int gcd(int a, int b) {
if (b == 0)
return a;
return gcd(b, a % b);
}
int lcm(int a, int b) {
return (a * b) / gcd(a, b);
}
int main() {
int num1, num2;
printf("Enter first number: ");
scanf("%d", &num1);
printf("Enter second number: ");
scanf("%d", &num2);
int hcf = gcd(num1, num2);
int lcm_result = lcm(num1, num2);
printf("HCF (GCD) of %d and %d is %d\n", num1, num2, hcf);
printf("LCM of %d and %d is %d\n", num1, num2, lcm_result);
return 0;
}
