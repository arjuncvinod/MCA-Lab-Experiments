input_string = input("Enter a string: ")

if len(input_string) < 2:
    print("The string is too short to exchange first and last characters.")
else:
    exchanged_string = input_string[-1] + input_string[1:-1] + input_string[0]
    print("String with first and last characters exchanged:", exchanged_string)
 