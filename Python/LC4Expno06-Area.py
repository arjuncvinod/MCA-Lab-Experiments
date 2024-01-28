square = lambda a : a*a
rectangle = lambda a,b : a*b
triangle = lambda b,h : 0.5*(b*h)
a=int(input("Enter the lenth of sides of square:"))
l=int(input("Enter the lenth  rectangle:"))
b=int(input("Enter the breadth of rectangle:"))
base=float(input("Enter the base of Triangle:"))
h=float(input("Enter the height of triangle:"))
print("Area of Square is :",square(a))
print("Area of Rectangle is:",rectangle(l,b))
print("Area of Triangle is:",triangle(base,h))