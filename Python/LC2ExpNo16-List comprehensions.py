numbers = [-3, 5, -8, 10, -2, 15]
positive_numbers = [num for num in numbers if num > 0]
print(positive_numbers)
n = 5
squares = [x**2 for x in range(1, n+1)]
print(squares)
word = "hello"
vowels = [char for char in word if char in 'aeiouAEIOU']
print(vowels)
ordinal_values = [ord(char) for char in word]
print(ordinal_values)