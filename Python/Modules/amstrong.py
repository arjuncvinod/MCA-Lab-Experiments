def ams(num):
	sum=0
	temp = num
	while temp > 0:
   		digit = temp % 10
   		sum += digit ** 3
   		temp //= 10
	if sum==num:
		return True
	else:
		return False

