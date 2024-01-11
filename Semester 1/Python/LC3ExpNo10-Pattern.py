num=100
for i in range(num):
  for j in range(i+1):
    print("*",end=" ")
  print()
for i in range(num-1,0,-1):
  for j in range(i):
   print("*",end=" ")
  print()
