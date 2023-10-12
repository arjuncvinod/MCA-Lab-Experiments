input_string = input("Enter a string: ")

if len(input_string) < 2:
    print("String is too short to perform replacement.")
else:
    first_char = input_string[0]
    modified_string = first_char + ''.join('$' if char == first_char else char for char in input_string[1:])
    print("Modified string:", modified_string)