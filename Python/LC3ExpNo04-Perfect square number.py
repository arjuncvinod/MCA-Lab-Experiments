start=int(input("Enter the starting number : "))
end=int(input("Enter the ending number : "))
fourdigit=[]
if start<1000 or start>9999 or end<1000 or end>9999:
        print("Please enter a four digit number !! " )
else:
        for num in range(start,end+1):
                tmp=num
                if num%2==0 and int(num**0.5)**2==num:
                        num=int(num/10)
                        if num%2==0:
                                num=int(num/10)
                                if num%2==0:
                                        num=int(num/10)
                                        if num%2==0:
                                                fourdigit.append(tmp)
print(fourdigit)
