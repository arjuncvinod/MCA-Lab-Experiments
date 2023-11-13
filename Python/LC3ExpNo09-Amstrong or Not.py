num=int(input("Enter the number:"))
num_cpy=num
num_dig=0
while num_cpy>0:
  num_cpy //=10
  num_dig+=1
num_cpy=num
amstrong_sum=0
while num_cpy >0:
  digit=num_cpy%10
  amstrong_sum+=digit**num_dig
  num_cpy //=10
if amstrong_sum==num:
  print("it is amstrong number")
else:
  print("it is not amstrong")