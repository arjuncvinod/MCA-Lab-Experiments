string = input("Enter a string : ")
n = int(input("Enter number of copies : "))
if n<0:
    print("Please enter a non negative integer")
else:
    result = string*n
print(result)