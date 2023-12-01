def oddOrEven(num):
  if (num==0):
   return " zero"
  elif (num%2==0):
   return "even"
  else:
   return "odd"
num=int(input("Enter the number:"))
val=oddOrEven(num)
print(val)
