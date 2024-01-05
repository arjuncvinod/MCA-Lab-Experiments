try:
        value = int(input("Enter the value:"))
        if(value<0):
                raise ValueError("That is a negative number!")
        else:
                print("The number is :",value)
except ValueError as e:
        print(e)