def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

def series_sum(n):
    result = 0
    for i in range(1, n + 1):
        term = i ** i / factorial(i)
        result += term
    return result
n = int(input("Enter the number of terms: "))
result = series_sum(n)
print(f"The sum of the series is: {result}")

