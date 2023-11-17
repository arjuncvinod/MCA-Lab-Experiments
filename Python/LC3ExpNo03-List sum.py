num_list=input("Enter the values to list separated by space:").split()
num_list1=[int(num) for num in num_list]
total_sum=0
for num in num_list1:
        total_sum+=num
print("sum of all terms in list",total_sum)