from abc import ABC, abstractmethod
class Polygon(ABC):
        @abstractmethod
        def area(self):
                pass
class Triangle(Polygon):
        def __init__(self,h,b):
                self.h=h
                self.b=b
        def area(self):
                print("Area of triangle is:",(self.h*self.b)/2)
class Rectangle(Polygon):
        def __init__(self,w,l):
                self.w=w
                self.l=l
        def area(self):
                print("Area of rectangle is:",(self.w*self.l))
choice=0
while(choice!=-1):
        choice=int(input("Enter the choice\n1.Area of Triangle\n2.Area of rectangle\n-1.Exit\n"))
        if(choice==1):
                b=int(input("Enter Base of traiangle"))
                h=int(input("Enter Height of triangle"))
                T=Triangle(b,h)
                T.area()
        elif(choice==2):
                l=int(input("Enter length of rectangle"))
                w=int(input("Enter width of rectangle"))
                R=Rectangle(l,w)
                R.area()
        else:
                print("Exiting")