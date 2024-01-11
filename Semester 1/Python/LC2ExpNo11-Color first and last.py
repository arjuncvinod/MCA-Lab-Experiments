color_names = input("Enter color names separated by commas: ")

colors = [color.strip() for color in color_names.split(',')]

if len(colors) > 0:
    print("First color:", colors[0])
    print("Last color:", colors[-1])
else:
    print("No colors entered.") 