from Modules.amstrong import ams
start=int(input("Enter the starting number: "))
end = int(input("Enter the ending number: "))
for i in range(start,end):
	res=ams(i)
	if res:
	 print(i,"  ")

