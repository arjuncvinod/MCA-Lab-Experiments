def copy_odd_lines(input_file_path, output_file_path):
    try:
        with open(input_file_path, 'r') as input_file, open(output_file_path, 'w') as output_file:
            lines = input_file.readlines()
            odd_lines = [line for index, line in enumerate(lines, start=1) if index % 2 != 0]
            output_file.writelines(odd_lines)
        print(f"Odd lines copied from {input_file_path} to {output_file_path}")
    except FileNotFoundError:
        print(f"File not found: {input_file_path}")
    except Exception as e:
        print(f"An error occurred: {e}")

input_file_path = 'input.txt'  # Replace with your input file path
output_file_path = 'output.txt'  # Replace with your output file path
copy_odd_lines(input_file_path, output_file_path)