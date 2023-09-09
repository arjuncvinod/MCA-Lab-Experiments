#include <stdio.h>
int main() {
float num1, num2, result;
char operator;
printf("Enter two numbers: ");
scanf("%f %f", &num1, &num2);
printf("Enter an operator (+, -, *, /): ");
scanf(" %c", &operator);
switch (operator) {
case '+':
result = num1 + num2;
printf("Result: %f\n", result);
break;
case '-':
result = num1 - num2;
printf("Result: %f\n", result);
break;
case '*':
result = num1 * num2;
printf("Result: %f \n", result);
break;
case '/':
if (num2 != 0) {
result = num1 / num2;
printf("Result: %f\n", result);
} else {
printf("Error: Division by zero\n");
}
break;
default:
printf("Invalid operator\n");
break;
}
return 0;
}