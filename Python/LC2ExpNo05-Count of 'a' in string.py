input_names = input("Enter a list of first names separated by commas: ")

first_names = input_names.split(',')

count_a = 0

for name in first_names:
    count_a += name.strip().lower().count('a')

print("Total occurrences of 'a' in the list of first names:", count_a)
