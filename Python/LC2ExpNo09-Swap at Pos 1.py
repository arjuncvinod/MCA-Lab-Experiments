str1 = "Hello"
str2 = "World"

if len(str1) >= 2 and len(str2) >= 2:
    str3 = str1[0] +str2[1]+ str1[2:] + " " + str2[0] +str1[1]+ str2[2:]
    print("Resulting string (str3):", str3)
else:
    print("Both input strings should have at least 2 characters for swapping.")