input_str = input("Enter a list of integers separated by spaces: ")

integer_list = [int(x) for x in input_str.split()]

odd_numbers = [num for num in integer_list if num % 2 != 0]

print("List after removing even numbers:", odd_numbers)
