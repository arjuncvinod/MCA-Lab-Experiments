class Rectangle:
        def __init__(self, length, breadth):
                self.length = length
                self.breadth = breadth
        def area(self):
                return (self.length*self.breadth)
        def perimeter(self):
                return (2*self.length + 2*self.breadth)
        def __gt__(self,other):
                if(self.area()>other.area()):
                        return True
                else:
                        return False
print("First Rectangle")
l = int (input("Enter the length of the Rectangle: "))
b = int (input("Enter the breadth of rectangle: "))
r1 = Rectangle(l,b)
print("Second Rectangle")
l = int (input("Enter the length of the Rectangle: "))
b = int (input("Enter the breadth of rectangle: "))
r2 = Rectangle(l,b)
if(r1>r2):
        print("r1 area is greater than r2 area")
else:
        print("r2 area is greater than r1 area")