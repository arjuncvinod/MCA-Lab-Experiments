num1 = int(input("Enter the first integer: "))
num2 = int(input("Enter the second integer: "))
sum_result = num1 + num2
difference_result = num1 - num2
product_result = num1 * num2
if num2 != 0:
    division_result = num1 / num2
else:
    division_result = "Division by zero is not allowed"
print("Sum:", sum_result)
print("Difference:", difference_result)
print("Product:", product_result)
print("Division:", division_result)