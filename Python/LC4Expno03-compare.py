def compare(s1,s2,n):
  for x in range(0,n):
    if s1[x]==s2[x]:
     return "true"
    else:
     return "false"

s1=input("Enter first string:")
s2=input("Enter second string:")
n=int(input("enter n:"))
res=compare(s1,s2,n)
print(res)
