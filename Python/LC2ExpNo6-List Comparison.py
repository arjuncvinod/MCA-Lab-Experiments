list1 = input("Enter the first list of integers separated by spaces: ")
list1 = list1.split()  
list1 = [int(item) for item in list1]

list2 = input("Enter the second list of integers separated by spaces: ")
list2 = list2.split() 
list2 = [int(item) for item in list2]  

if len(list1) == len(list2):
    print("Both lists have the same length.")
else:
    print("Both lists have different lengths.")

sum1 = sum(list1)
sum2 = sum(list2)

if sum1 == sum2:
    print("Both lists sum to the same value.")
else:
    print("Both lists do not sum to the same value.")

common_elements = set(list1) & set(list2)
if common_elements:
    print("Common elements in both lists:", common_elements)
else:
    print("There are no common elements in both lists.")