def read_file_into_list(file_path):
    try:
        with open(file_path, 'r') as file:
            lines = file.readlines()
            return lines
    except FileNotFoundError:
        print(f"File not found: {file_path}")
        return []

file_path = 'example.txt'
lines_list = read_file_into_list(file_path)

if lines_list:
    print("Lines read from the file:")
    for line in lines_list:
        print(line.strip())
else:
    print("No lines read from the file.")
