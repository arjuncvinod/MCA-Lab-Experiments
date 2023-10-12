input_str = input("Enter a list of integers separated by spaces: ")

input_list = input_str.split()

result_list = []

for item in input_list:
    try:
        number = int(item)
        if number > 100:
            result_list.append('over')
        else:
            result_list.append(str(number))
    except ValueError:
        result_list.append(item)

result_str = ' '.join(result_list)

print("Modified list:", result_str)