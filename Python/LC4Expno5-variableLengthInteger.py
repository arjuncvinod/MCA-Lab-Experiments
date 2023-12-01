def add_integers(*args):
    """
    Adds variable-length integer arguments.

    Parameters:
    *args (int): Variable number of integer arguments.

    Returns:
    int: Sum of the integer arguments.
    """
    total = 0
    for num in args:
        if isinstance(num, int):
            total += num
        else:
            raise TypeError("Arguments must be integers.")
    return total
result = add_integers(1, 2, 3, 4, 5)
print(f"Result: {result}")
