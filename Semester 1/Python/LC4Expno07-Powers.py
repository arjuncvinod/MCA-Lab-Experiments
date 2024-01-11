display_powers_of_2 = lambda n:list(map(lambda x: 2**x, range(n)))
num_of_powers =int(input("Enter the number of powers needed:"))
result = display_powers_of_2(num_of_powers)
print(f"Powers are:",result)