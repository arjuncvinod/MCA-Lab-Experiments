class Publisher:
        publisher_id=0
        publisher_name=""
        def __init__(self,id,name):
                self.publisher_id=id
                self.publisher_name=name
        def display(self):
                print("Publisher id:",self.publisher_id)
                print("Publisher name:",self.publisher_name)
class Book(Publisher):
        title=""
        author=""
        def __init__(self,title,author,id,name):
                self.title=title
                self.author=author
                super().__init__(id,name)
        def display(self):
                print("Book title:",self.title)
                print("Book author:",self.author)
                super().display()
class Python(Book):
        price=0
        no_of_pages=0
        def __init__(self,price,pages,title,author,id,name):
                self.price=price
                self.no_of_pages=pages
                super().__init__(title,author,id,name)
        def display(self):
                print("Price:",self.price)
                print("No of pages:",self.no_of_pages)
                super().display()
p_id=int(input("Enter publisher_id:"))
p_name=input("Enter publisher name:")
title=input("Enter the title:")
author=input("Enter the author:")
price=int(input("Enter the price"))
no_of_pages=int(input("Enter the no of pages"))
b1=Python(price,no_of_pages,title,author,p_id,p_name)
b1.display()