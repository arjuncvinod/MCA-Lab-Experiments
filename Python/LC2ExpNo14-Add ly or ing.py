input_string = input("Enter a string: ")

if input_string.endswith("ing"):
    modified_string = input_string + "ly"
else:
    modified_string = input_string + "ing"
    
print("Modified string:", modified_string)