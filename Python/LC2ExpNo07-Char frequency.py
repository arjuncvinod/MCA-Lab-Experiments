input_string = input("Enter a string: ")

char_frequency = {}

for char in input_string:
    if char in char_frequency:
        char_frequency[char] += 1
    else:
        char_frequency[char] = 1

for char, frequency in char_frequency.items():
    print(f"'{char}' occurs {frequency} time(s) in the string.")