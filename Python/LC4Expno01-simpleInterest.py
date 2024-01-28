def simpleInterest(p,t,age):
   if age>=60:
    return (p*t*12)/100
   else:
    return (p*t*10)/100

p=float(input("Enter the principal amount:"))
t=int(input("Entr the TimePeriod:"))
age=int(input("enter the age of customer:"))
sim=simpleInterest(p,t,age)
print("simple interest is:",sim)
print("Total Balane:",p+sim)
